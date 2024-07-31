#include <iostream>
#include <algorithm>
#include <sstream>

std::string string_to_md5(std::string text) {
    if (text.empty()) return "None";

    unsigned char md5[MD5_DIGEST_LENGTH];
    MD5((const unsigned char*)text.c_str(), text.size(), md5);

    std::stringstream ss;
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        ss << std::hex << std::setfill('0') << std::setw(2) << (int)md5[i];
    }

    return ss.str();
}