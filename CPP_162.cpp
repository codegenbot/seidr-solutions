#include <iostream>
#include <string>
#include <array>
#include <openssl/md5.h>

std::string string_to_md5(std::string text) {
    if (text.empty()) {
        return "None";
    }

    unsigned char digest[MD5_DIGEST_LENGTH];
    MD5((const unsigned char*)text.c_str(), text.size(), digest);

    std::array<char, 33> md5Hash;
    for (int i = 0; i < MD5_DIGEST_LENGTH; ++i) {
        sprintf(&md5Hash[i * 2], "%02x", (unsigned int)digest[i]);
    }

    return std::string(md5Hash.data(), md5Hash.size());
}