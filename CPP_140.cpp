#include <iostream>
#include <string>

std::string fix_spaces(std::string text) {
    std::string result;
    bool consecutiveSpaces = false;

    for (char c : text) {
        if (c == ' ') {
            if (!consecutiveSpaces) {
                result += '_';
                consecutiveSpaces = true;
            }
        } else {
            if (consecutiveSpaces) {
                result += '-';
                consecutiveSpaces = false;
            }
            result += c;
        }
    }

    if (consecutiveSpaces) {
        result += '-';
    }

    return result;
}