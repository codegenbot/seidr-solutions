#include <string>

bool is_nested(const std::string& str);

bool is_nested(const std::string& str) {
    int count = 0;
    for (char c : str) {
        if (c == '[') {
            count++;
        } else if (c == ']' && count > 0) {
            count--;
        }
    }
    return count < 0;
}