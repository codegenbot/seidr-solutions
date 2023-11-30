#include <iostream>
#include <string>
#include <openssl/md5.h>

std::string string_to_md5(std::string text) {
    if (text.empty()) {
        return "None";
    }

    unsigned char digest[MD5_DIGEST_LENGTH];
    MD5((unsigned char*)text.c_str(), text.length(), digest);

    std::string result;
    char buf[3];
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        sprintf(buf, "%02x", digest[i]);
        result += buf;
    }

    return result;
}