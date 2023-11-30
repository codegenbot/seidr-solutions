#include <iostream>
#include <openssl/md5.h>
#include <string>

std::string string_to_md5(std::string text) {
    if (text.empty()) {
        return "None";
    }

    unsigned char md5_hash[MD5_DIGEST_LENGTH];
    MD5(reinterpret_cast<const unsigned char*>(text.c_str()), text.length(), md5_hash);

    std::string md5_string;
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        md5_string += std::to_string(md5_hash[i]);
    }

    return md5_string;
}