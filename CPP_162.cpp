#include <iostream>
#include <string>
#include <md5.h>

std::string string_to_md5(std::string text) {
    if (text.empty()) return "";

    unsigned char md[16];
    unsigned char* data = reinterpret_cast<unsigned char*>(text.c_str());
    int len = text.length();
    MD5_CTX ctx;
    MD5_Init(&ctx);
    MD5_Update(&ctx, data, len);
    MD5_Final(md, &ctx);

    std::string result;
    for (int i = 0; i < 16; ++i) {
        char buf[3];
        sprintf(buf, "%02x", md[i]);
        result += buf;
    }
    return result;
}