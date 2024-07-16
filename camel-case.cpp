#include <iostream>
#include <string>

std::string kebabToCamel(std::string s) {
    std::string result = "";
    bool capitalizeNext = true;
    
    for (char c : s) {
        if (c == '-') {
            capitalizeNext = true;
        } else if (capitalizeNext) {
            result += char(toupper(c));
            capitalizeNext = false;
        } else {
            result += char(tolower(c));
        }
    }
    
    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string in kebab-case: ";
    std::getline(std::cin, input);
    std::cout << "The equivalent camelCase string is: " << kebabToCamel(input) << std::endl;
    return 0;
}