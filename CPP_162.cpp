#include <iostream>
#include <sstream>
#include <iomanip>

std::string string_to_md5(std::string text) {
    if (text.empty()) return "";

    unsigned char result[16];
    MD5_CTX md5;
    MD5_Init(&md5);
    const char* cstr = text.c_str();
    size_t length = text.length();
    MD5_Update(&md5, cstr, length);
    MD5_Final(&md5, result);

    std::stringstream ss;
    for (size_t i = 0; i < 16; ++i) {
        ss << std::hex << std::setfill('0') << std::setw(2) << static_cast<int>(result[i]);
    }

    return ss.str();
}