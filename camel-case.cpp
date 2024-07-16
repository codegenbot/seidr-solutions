```cpp
#include <iostream>
#include <string>

std::string kebabToCamel(const std::string& str) {
    std::string result;
    bool capitalize = false;

    result += ' ';  // Add a space to account for leading space
    for (char c : str + " ") {  
        if (c == '-') {
            result += ' ';  // Add a space to separate words
            capitalize = true;  // Start new word, so capitalize next char
        } else if (capitalize) {
            result += toupper(c);  
            capitalize = false;
        } else {
            result += tolower(c);
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