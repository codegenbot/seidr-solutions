```cpp
#include <iostream>
#include <string>
#include <cctype>

std::string camelCase(const std::string& str) {
    std::string result;
    bool capitalize = true;

    for (char c : str) {
        if (c == '-') {
            result += ' '; 
            capitalize = true; 
        } else if (capitalize) { 
            result += toupper(c);
            capitalize = false; 
        } else {
            result += tolower(c); 
        }
    }

    // Check if the string is not empty and erase the first space
    if (!result.empty()) {
        size_t pos = 0;
        for (size_t i = 0; i < result.size(); ++i) {
            if (result[i] == ' ') {
                pos = i;
                break;
            }
        }
        if (pos > 0) {
            result.erase(0, pos);
        }
    }

    return result;
}

int main() {
    std::string input;
    while(true) {
        std::cout << "Enter your string (in kebab-case): ";
        std::getline(std::cin, input);

        if (!input.empty()) { 
            std::cout << "Camel Case: " << camelCase(input) << std::endl; 
        }
    }
    return 0;
}