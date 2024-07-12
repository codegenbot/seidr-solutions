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
    return count == 0;
}

int main() {
    std::string str;
    std::cin >> str;

    if (is_nested(str)) {
        std::cout << "The input has nested brackets." << std::endl;
    } else {
        std::cout << "The input does not have nested brackets." << std::endl;
    }

    return 0;
}