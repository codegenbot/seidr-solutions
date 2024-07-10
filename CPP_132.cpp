#include <iostream>
#include <string>

bool is_nested(std::string str) {
    int count = 0;
    for (char c : str) {
        if (c == '[' || c == '{' || c == '(') {
            count++;
        } else if (c == ']' && count > 0) {
            count--;
        } else if (c == '}' && count > 0) {
            count--;
        } else if (c == ')' && count > 0) {
            count--;
        } else if (c == ']' || c == '}' || c == ')') {
            return false;
        }
    }
    return count == 0;
}