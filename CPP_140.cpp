#include <string>

std::string fix_spaces(const std::string& text) {
    std::string result;
    int count = 0;
    for (char c : text) {
        if (c == ' ') {
            count++;
            if (count > 2) {
                result.pop_back();
                result.pop_back();
                result.push_back('-');
            } else {
                result.push_back('_');
            }
        } else {
            count = 0;
            result.push_back(c);
        }
    }
    return result;
}