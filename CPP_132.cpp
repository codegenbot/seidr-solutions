#include <iostream>
#include <string>
#include <algorithm>

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

    auto chars_to_erase = std::remove_if(str.begin(), str.end(), 
        [&](char c){ return std::toupper(c) == ' '; }); // Corrected lambda
    str.erase(chars_to_erase, str.end()); // Use erase with removed range

    for (char c : str) { 
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