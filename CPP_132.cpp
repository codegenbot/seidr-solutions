#include <iostream>
#include <string>
#include <cassert>

bool is_nested(std::string str) {
    int count = 0;
    for (char c : str) {
        if (c == '[') {
            count++;
        } else if (c == ']' && count > 0) {
            count--;
        } else if (c == ']' && count <= 0) {
            return false;
        }
    }
    return count == 0;
}