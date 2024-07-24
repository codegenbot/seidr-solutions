#include <iostream>
#include <cassert>
#include <cstring>
#include <openssl/md5.h>
#include <openssl/evp.h>

std::string string_to_md5(const std::string& text) {
    if (text.empty()) {
        return "None";
    }

    unsigned char digest[MD5_DIGEST_LENGTH];
    EVP_MD_CTX* mdctx = EVP_MD_CTX_new();
    EVP_DigestInit(mdctx, EVP_md5());
    EVP_DigestUpdate(mdctx, (unsigned char*)text.c_str(), text.length());
    EVP_DigestFinal(mdctx, digest, nullptr);
    EVP_MD_CTX_free(mdctx);

    char mdString[33];
    for (int i = 0; i < 16; i++) {
        sprintf(&mdString[i * 2], "%02x", (unsigned int)digest[i]);
    }

    return std::string(mdString);
}

int main() {
    std::string input_text;
    std::cout << "Enter a text to calculate its MD5 hash: ";
    std::cin >> input_text;

    std::string md5_hash = string_to_md5(input_text);
    std::cout << "MD5 hash of the input text: " << md5_hash << std::endl;

    return 0;
}