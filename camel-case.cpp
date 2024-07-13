```cpp
#include <iostream>
#include <string>
#include <cctype>

std::string camelCase(const std::string& str) {
    std::string result;
    bool capitalize = true;

    for (char c : str) {
        if (c == '-') {
            result.push_back(' ');
            capitalize = true; // Capitalize next letter
        } else if (capitalize) { 
            result.push_back(toupper(c));
            capitalize = false; 
        } else {
            result.push_back(tolower(c)); 
        }
    }

    return result;
}

int main() {
    std::string input;
    std::cout << "Enter your string (in kebab-case): ";
    std::getline(std::cin, input);
    std::cout << "Camel Case: " << camelCase(input) << std::endl;
    return 0;
}