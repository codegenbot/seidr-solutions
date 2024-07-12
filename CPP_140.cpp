#include <iostream>
#include <string>
#include <algorithm>

std::string fix_spaces(std::string text) {
    std::string result = "";
    bool previousSpace = false;
    for (char c : text) {
        if (c == ' ') {
            if (!previousSpace) {
                result += '_';
                previousSpace = true;
            } else if (result.size() > 1 && result.back() == ' ') {
                result.pop_back();
                result += '-';
            }
        } else {
            result += c;
            previousSpace = false;
        }
    }
    return result;
}