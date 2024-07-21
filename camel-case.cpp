#include <iostream>
#include <string>

std::string kebabToCamel(const std::string& str) {
    std::string result = "";
    bool capitalizeNext = true;
    
    for (char c : str) {
        if (c == '-') {
            capitalizeNext = true;
        } else if (capitalizeNext) {
            result += toupper(c);
            capitalizeNext = false;
        } else {
            result += tolower(c);
        }
    }
    
    return result;
}

int main() {
    std::string input;
    while (true) {
        std::cout << "Enter a string in kebab-case or 'quit' to exit: ";
        std::cin >> input;
        
        if (input == "quit")
            break;
        
        std::cout << kebabToCamel(input) << std::endl;
    }
    
    return 0;
}