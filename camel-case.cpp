#include <iostream>
#include <sstream>
#include <string>

std::string toCamelCase(std::string s) {
    std::stringstream ss;
    bool capitalizeNext = true;

    for (char c : s) {
        if (c == '-') {
            capitalizeNext = true;
        } else if (capitalizeNext) {
            ss << (char)toupper(c);
            capitalizeNext = false;
        } else {
            ss << (char)tolower(c);
        }
    }

    return ss.str();
}