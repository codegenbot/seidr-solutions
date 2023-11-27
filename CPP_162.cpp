#include <iostream>
#include <string>
#include <openssl/md5.h>

std::string string_to_md5(std::string text) {
    if (text.empty()) {
        return "None";
    }

    unsigned char digest[MD5_DIGEST_LENGTH];
    EVP_MD_CTX* md5Context = EVP_MD_CTX_new();
    EVP_DigestInit_ex(md5Context, EVP_md5(), nullptr);
    EVP_DigestUpdate(md5Context, text.c_str(), text.size());
    EVP_DigestFinal_ex(md5Context, digest, nullptr);
    EVP_MD_CTX_free(md5Context);

    char md5Hash[33];
    for (int i = 0; i < MD5_DIGEST_LENGTH; ++i) {
        sprintf(&md5Hash[i * 2], "%02x", static_cast<unsigned int>(digest[i]));
    }
    md5Hash[32] = '\0';

    return std::string(md5Hash);
}

int main() {
    std::string text;
    std::cout << "Enter the text to be converted to MD5: ";
    std::getline(std::cin, text);

    std::cout << "MD5 hash: " << string_to_md5(text) << std::endl;

    return 0;
}