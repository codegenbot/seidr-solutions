```cpp
#include <openssl/md5.h>
#include <iostream>
#include <string>
#include <algorithm>

std::string string_to_md5(std::string text) {
    if (text.empty()) return "";

    unsigned char md5[16];
    MD5_CTX ctx;
    MD5_Init(&ctx);
    const char* p = text.c_str();
    while (*p) {
        MD5_Update(&ctx, p, 1);
        p++;
    }
    MD5_Final(md5, &ctx);

    std::string result(32, '0');
    for (int i = 0; i < 16; ++i) {
        char buf[3];
        sprintf(buf, "%02x", md5[i]);
        result.replace(i * 2, 2, buf);
    }

    return result;
}

g++ -o a.cpp -lssl