```cpp
#include <iostream>
#include <string>

bool is_nested(std::string str) {
    int open = 0;
    int close = 0;
    for (size_t i = 0; i < str.size(); i++) {
        if (str[i] == '[') {
            open++;
        } else if (str[i] == ']') {
            close++;
            if (open > close) {
                return false;
            }
        }
    }
    return open != close;
}

int main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);
    if (is_nested(str)) {
        std::cout << "The string is nested." << std::endl;
    } else {
        std::cout << "The string is not nested." << std::endl;
    }
}