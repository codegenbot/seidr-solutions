#include <iostream>
#include <string>

std::string camelCase(const std::string& s) {
    std::string result = "";
    bool firstWord = true;
    
    for (char c : s) {
        if (c == '-') {
            if (!firstWord) {
                result += char(toupper(c));
            } else {
                firstWord = false;
            }
        } else if (c == ' ') {
            if (!firstWord) {
                result += char(toupper(c));
            } else {
                firstWord = false;
            }
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
    std::cout << "CamelCase: " << camelCase(input) << std::endl;
    return 0;
}