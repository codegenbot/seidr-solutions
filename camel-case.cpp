```cpp
#include <iostream>
#include <string>

std::string camelCase(std::string str) {
    std::string result;
    bool capitalize = true;

    for (char c : str) {
        if (c == '-') {
            result += ' ';
            capitalize = true; // Capitalize the next character
        } else {
            result += (capitalize ? toupper(c) : tolower(c));
            capitalize = false;
        }
    }

    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string in kebab-case: ";
    std::getline(std::cin, input);
    std::string output = camelCase(input); 
    std::cout << "Camel Case: " << output << std::endl; 
    return 0;
}