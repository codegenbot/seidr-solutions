#include <openssl/evp.h>
#include <iostream>
#include <string>
#include <algorithm>

std::string string_to_md5(std::string text) {
    if (text.empty()) return "";

    unsigned char md5[16];
    EVP_MD_CTX ctx;
    EVP_Preferences defaults;
    EVP_MD_CTX_init(&ctx);
    EVP_DigestInit_ex(&ctx, EVP_md5(), nullptr);
    const char* p = text.c_str();
    size_t len = text.length();
    while (*p) {
        EVP_DigestUpdate(&ctx, p++, 1);
    }
    EVP_DigestFinal_ex(&ctx, md5, &len);

    std::string result(32, '0');
    for (int i = 0; i < 16; ++i) {
        char buf[3];
        sprintf(buf, "%02x", md5[i]);
        result.replace(i*2, 2, buf);
    }

    return result;
}