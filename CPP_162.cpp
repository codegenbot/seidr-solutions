```
#include <iostream>
#include <string>
#include <openssl/evp.h>

std::string cppString_to_md5(std::string text) {
    if (text.empty()) return "";

    unsigned char md5[16];
    EVP_MD_CTX* ctx = EVP_MD_CTX_create();
    EVP_DigestInit_ex(ctx, EVP_md5(), NULL);
    const unsigned char* input = (const unsigned char*)text.c_str();
    size_t len = text.size();

    EVP_DigestUpdate(ctx, input, len);
    EVP_DigestFinal_ex(ctx, md5, reinterpret_cast<unsigned int*>(&len));

    std::string result;
    for (int i = 0; i < 16; ++i) {
        char buffer[3];
        sprintf(buffer, "%02x", md5[i]);
        result += std::string(buffer);
    }

    EVP_MD_CTX_destroy(ctx);

    return result;
}