#include <string>

std::string fix_spaces(const std::string& text) {
    int count = 0;
    std::string result = "";
    for (char c : text) {
        if (c == ' ') {
            count++;
            if (count > 2) {
                result.pop_back();
                result.pop_back();
                result += "-";
                count = 1;
            } else {
                result += '_';
            }
        } else {
            count = 0;
            result += c;
        }
    }
    return result;
}