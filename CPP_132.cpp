#include <iostream>
#include <string>
#include <cassert>

bool is_nested(const std::string& str) {
    int count = 0;
    for (char c : str) {
        if (c == '[') {
            count++;
        } else if (c == ']' && count > 0) {
            count--;
        }
    }

    if (count == 0) {
        std::cout << "true" << std::endl;
    } else {
        std::cout << "false" << std::endl;
    }
}

int main() {
    is_nested("[]");
    is_nested("[[]]");
    is_nested("[]]");
    is_nested("]]]]]]]]");
    return 0;
}