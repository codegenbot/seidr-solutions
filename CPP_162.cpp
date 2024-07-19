#include <iostream>
#include <string>
#include <cassert>
#include "md5.h"

std::string string_to_md5(const std::string& text) {
    if (text.empty()) {
        return "None";
    }

    unsigned char digest[16];
    MD5_CTX ctx;
    MD5_Init(&ctx);
    MD5_Update(&ctx, text.c_str(), text.length());
    MD5_Final(digest, &ctx);

    char mdString[33];
    for (int i = 0; i < 16; i++) {
        sprintf(&mdString[i*2], "%02x", (unsigned int)digest[i]);
    }

    return std::string(mdString);
}

int main() {
    assert(string_to_md5("password") == "5f4dcc3b5aa765d61d8327deb882cf99");

    return 0;
}