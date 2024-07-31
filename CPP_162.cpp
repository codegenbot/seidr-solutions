#include <openssl/md5.h>
#include <iostream>
#include <sstream>
#include <string>

std::string string_to_md5(std::string text) {
    if (text.empty()) return "";

    unsigned char md5[16];
    MD5_CTX ctx;
    MD5_Init(&ctx);
    const char* cstr = text.c_str();
    MD5_Update(&ctx, cstr, text.size());
    MD5_Final(md5, &ctx);

    std::stringstream ss;
    for (int i = 0; i < 16; ++i) {
        ss << std::setfill('0') << std::setw(2) << std::hex << (int)md5[i];
    }

    return ss.str();
}