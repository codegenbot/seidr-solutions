#include <openssl/evp.h>
#include <iostream>
#include <string>
#include <algorithm>

std::string string_to_md5(const std::string& text) {
    if (text.empty()) return "";

    EVP_MD_CTX mdctx;
    unsigned char md[16];
    const EVP_MD* md_type = EVP_md5();
    int result = EVP_DigestInit_ex(&mdctx, md_type, NULL);
    assert(result == 1);

    const char* p = text.c_str();
    while (*p) {
        EVP_DigestUpdate(&mdctx, &(*p), 1);
        p++;
    }

    EVP_DigestFinal_ex(&mdctx, md, (unsigned int*)&result);
    assert(result == 0);

    std::string result_str(32, '0');
    for (int i = 0; i < 16; ++i) {
        char buf[3];
        sprintf(buf, "%02x", md[i]);
        result_str.replace(i * 2, 2, buf);
    }

    return result_str;
}