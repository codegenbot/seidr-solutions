#include <iostream>
#include <string>
#include <cassert>
#include <openssl/md5.h>
#include <cstdint>

std::string string_to_md5(const std::string& text) {
    if (text.empty()) {
        return "None";
    }

    uint8_t digest[MD5_DIGEST_LENGTH];
    MD5((uint8_t*)text.c_str(), text.length(), digest);

    char mdString[33];
    for (int i = 0; i < MD5_DIGEST_LENGTH / 2; i++) {
        sprintf(&mdString[i*2], "%02x", (unsigned int)digest[i]);
    }
    
    return mdString;
}

#undef main

int main() {
    assert(string_to_md5("password") == "5f4dcc3b5aa765d61d8327deb882cf99");

    return 0;
}