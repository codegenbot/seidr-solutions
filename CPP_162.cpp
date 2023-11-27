#include <iostream>
#include <string>
#include <openssl/evp.h>

std::string string_to_md5(std::string text) {
    if (text.empty()) {
        return "None";
    }

    unsigned char digest[EVP_MAX_MD_SIZE];
    EVP_MD_CTX *md5Context = EVP_MD_CTX_new();
    EVP_DigestInit(md5Context, EVP_md5());
    EVP_DigestUpdate(md5Context, text.data(), text.size());
    unsigned int length = 0;
    EVP_DigestFinal(md5Context, digest, &length);

    char md5Hash[33];
    for (unsigned int i = 0; i < length; ++i) {
        sprintf(&md5Hash[i * 2], "%02x", digest[i]);
    }

    EVP_MD_CTX_free(md5Context);

    return std::string(md5Hash);
}

int main() {
    std::string input;
    std::cout << "Enter the text: ";
    std::cin >> input;
    std::cout << "MD5 hash: " << string_to_md5(input) << std::endl;
    return 0;
}