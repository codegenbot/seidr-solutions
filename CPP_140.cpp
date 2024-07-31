#include <string>

std::string fix_spaces(const std::string& text) {
    std::string result;
    bool consecutive = false;
    for (char c : text) {
        if (c == ' ') {
            if (!consecutive) {
                result += '_';
                consecutive = true;
            } else {
                result += '-';
            }
        } else {
            result += c;
            consecutive = false;
        }
    }
    return result;
}