```c++
#include <iostream>
#include <string>

std::string camelCase(std::string input) {
    std::string result = "";
    bool firstWord = true;
    
    for (char c : input) {
        if (c == '-') {
            // Skip dash
        } else if (c == ' ') {
            // Skip space
        } else {
            if (!firstWord) {
                result += char(toupper(c));
            } else {
                result += char(tolower(c));
            }
            firstWord = false;
        }
    }
    
    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string in kebab-case: ";
    std::cin >> input;
    std::cout << "The camelCase version is: " << camelCase(input) << std::endl;
    return 0;
}