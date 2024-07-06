```cpp
#include <iostream>
#include <string>

bool is_nested(std::string str);

int main() {
    std::cout << "Enter a string: ";
    std::string str;
    std::cin >> str;

    if (is_nested(str)) {
        std::cout << "The string is nested." << std::endl;
    } else {
        std::cout << "The string is not nested." << std::endl;
    }

    return 0;
}

bool is_nested(std::string str) {
    int open = 0, close = 0;
    for (char c : str) {
        if (c == '[') open++;
        else if (c == ']') close++;
    }
    return open > 0 && close > open;
}