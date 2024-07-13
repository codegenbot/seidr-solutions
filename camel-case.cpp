```cpp
#include <iostream>
#include <string>
#include <cctype>

std::string camelCase(const std::string& str) {
    std::string result;
    bool capitalize = true;

    for (auto c : str) {
        if (c == '-') {
            result += ' '; 
            capitalize = true; 
        } else if (capitalize) { 
            result += _toupper(c);
            capitalize = false; 
        } else {
            result += _tolower(c); 
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