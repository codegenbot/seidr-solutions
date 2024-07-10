#include <iostream>
#include <string>
#include <functional>

bool is_nested(const std::string str);

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    if (is_nested(input)) {
        std::cout << "The string is nested." << std::endl;
    } else {
        std::cout << "The string is not nested." << std::endl;
    }
    return 0;
}

bool is_nested(const std::string str) {
    bool result = false;
    int level = 0;

    for (char c : std::string(str).erase(std::remove_if([&c](char x){ return std::toupper(x) == c; }), str.begin()), str.end())) { 
        if (c == '(') {
            level++;
        } else if (c == ')') {
            if (level > 0) {
                level--;
            }
        }
    }

    return level != 0; 
}