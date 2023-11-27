#include <iostream>
#include <string>
#include <array>
#include <openssl/evp.h>

std::string string_to_md5(std::string text) {
    if (text.empty()) {
        return "None";
    }

    unsigned char digest[EVP_MAX_MD_SIZE];
    EVP_MD_CTX *md5Context = EVP_MD_CTX_new();
    EVP_DigestInit(md5Context, EVP_md5());
    EVP_DigestUpdate(md5Context, text.c_str(), text.length());
    EVP_DigestFinal_ex(md5Context, digest, nullptr);
    EVP_MD_CTX_free(md5Context);

    std::array<char, 33> md5Hash;
    for (int i = 0; i < EVP_MD_size(EVP_md5()); ++i) {
        sprintf(&md5Hash[i * 2], "%02x", (unsigned int)digest[i]);
    }

    return std::string(md5Hash.data(), md5Hash.size());
}

int main() {
    std::string text;
    std::cout << "Enter a string: ";
    std::getline(std::cin, text);

    std::string md5Hash = string_to_md5(text);
    std::cout << "MD5 Hash: " << md5Hash << std::endl;

    return 0;
}