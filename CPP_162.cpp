#include <iostream>
#include <sstream>
#include <iomanip>

std::string string_to_md5(const std::string& str) {
    std::stringstream ss;
    for (int i = 0; i < 16; ++i) {
        ss << std::setfill('0') << std::setw(2) << std::hex << (int)str[i];
    }
    return ss.str();
}