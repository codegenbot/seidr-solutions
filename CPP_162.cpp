#include <iostream>
#include <cassert>
#include <sstream>
#include <iomanip>
#include <functional>

std::string string_to_md5(const std::string& str) {
    std::hash<std::string> hasher;
    size_t hash = hasher(str);

    std::stringstream ss;
    ss << std::hex << std::setw(16) << std::setfill('0') << hash;

    return ss.str().substr(0, 32); // Keep only first 32 characters for compatibility
}