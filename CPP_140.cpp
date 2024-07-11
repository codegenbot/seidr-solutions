#include <string>

std::string fix_spaces(std::string text) {
    std::string result;
    bool isConsecutive = false;
    for (char c : text) {
        if (c == ' ') {
            if (isConsecutive) {
                result.pop_back();
                result += "-";
            } else {
                result += "_";
            }
            isConsecutive = true;
        } else {
            result += c;
            isConsecutive = false;
        }
    }
    return result;
}