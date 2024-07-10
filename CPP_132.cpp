#include <string>
bool is_nested(std::string str) {
    int open = 0, close = 0;
    for (char c : str) {
        if (c == '[') open++;
        else if (c == ']') {
            if (close > open) return false; 
            close++;
        }
    }
    return close != open;
}