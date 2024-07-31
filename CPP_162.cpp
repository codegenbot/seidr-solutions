#include <iostream>
#include <digest.h>

std::string string_to_md5(std::string text) {
    if (text.empty()) {
        return "None";
    }

    unsigned char md[16];
    MD5(text.c_str(), text.length(), md);

    std::string result;
    for (int i = 0; i < 16; ++i) {
        sprintf(result.append("%02x"), md[i]);
    }
    return result;
}