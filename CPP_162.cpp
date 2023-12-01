#include<iostream>
#include<string>
#include<openssl/evp.h>

std::string string_to_md5(std::string text) {
    if (text.empty()) {
        return "None";
    }

    EVP_MD_CTX* mdctx = EVP_MD_CTX_new();
    EVP_DigestInit(mdctx, EVP_md5());

    unsigned char digest[EVP_MAX_MD_SIZE];
    unsigned int digestLen;
    EVP_DigestUpdate(mdctx, text.c_str(), text.length());
    EVP_DigestFinal(mdctx, digest, &digestLen);

    EVP_MD_CTX_free(mdctx);

    char md5String[33];
    for (unsigned int i = 0; i < digestLen; i++) {
        sprintf(&md5String[i * 2], "%02x", digest[i]);
    }

    return md5String;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::cin >> input;
    std::cout << "MD5 Hash: " << string_to_md5(input) << std::endl;
    return 0;
}