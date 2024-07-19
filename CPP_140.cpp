#include <string>

std::string fix_spaces(std::string text) {
    std::string result = "";
    bool prev_space = false;

    for (char c : text) {
        if (c == ' ') {
            if (!prev_space) {
                result += '_';
                prev_space = true;
            }
        } else {
            if (prev_space) {
                result += '-';
                prev_space = false;
            }
            result += c;
        }
    }

    return result;
}