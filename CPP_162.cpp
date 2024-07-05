#include <openssl/md5.h>
#include <string>
#include <cstdio>

std::string string_to_md5(const std::string& text) {
    if (text.empty()) return "None";

    unsigned char digest[MD5_DIGEST_LENGTH];
    MD5((unsigned char*)text.c_str(), text.size(), digest);

    char md5string[33];
    for (int i = 0; i < 16; ++i)
        sprintf(&md5string[i * 2], "%02x", (unsigned int)digest[i]);

    return std::string(md5string);
}