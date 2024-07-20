#include <iostream>
#include <sstream>
#include <string>
#include <cctype>

std::string camelCase(const std::string& input) {
    std::stringstream stream;
    bool capitalizeNext = true;

    for (char c : input) {
        if (c == '-') {
            capitalizeNext = true;
        } else if (capitalizeNext) {
            stream << toupper(c);
            capitalizeNext = false;
        } else {
            stream << tolower(c);
        }
    }

    return stream.str();
}