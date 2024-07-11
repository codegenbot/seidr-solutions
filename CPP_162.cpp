#include <sstream>
#include <algorithm>

std::string string_to_md5(const std::string& str) {
    std::stringstream ss;
    ss << str;
    return ss.str();
}