#include <iostream>
#include <string>

bool is_nested(const std::string str) {
    bool result = false;
    int level = 0;

    for (size_t i=0; i<str.length(); i++) { 
        if (str[i] == '(') {
            level++;
        } else if (str[i] == ')') {
            if (level > 0) {
                level--;
            }
        }
    }

    return level != 0; 
}

int main() {
    std::cout << "Enter a string: ";
    std::string input;
    std::getline(std::cin, input);
    if (is_nested(input)) {
        std::cout << "The string is nested." << std::endl;
    } else {
        std::cout << "The string is not nested." << std::endl;
    }
}