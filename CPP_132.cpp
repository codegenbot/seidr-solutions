#include <string>

bool is_nested(std::string str) {
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '(' && str.find(')', i) != std::string::npos) {
            return true;
        }
    }
    return false;
}