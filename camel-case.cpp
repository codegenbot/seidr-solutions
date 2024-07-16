```cpp
#include <iostream>
#include <string>

std::string kebabToCamel(const std::string& str) {
    std::string result;
    bool capitalize = true;

    for (char c : str) {
        if (c == '-') {
            if(capitalize) {
                result += toupper(c);
                capitalize = false; 
            } else {
                result += ' ';  // Add a space to separate words
            }
        } else if (capitalize) {
            result += toupper(c);  // Capitalize first letter of each word
            capitalize = false;
        } else {
            result += c;
        }
    }

    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string in kebab-case: ";
    std::getline(std::cin, input);
    std::cout << "CamelCase output: " << kebabToCamel(input) << std::endl;
    return 0;
}