#include <iostream>
#include <string>

std::string kebabToCamel(std::string s) {
    std::string result = "";
    bool capitalizeNext = true;
    
    for (char c : s) {
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
        std::cout << "Enter a string in kebab-case (or 'exit' to stop): ";
        std::cin >> input;
        
        if (input == "exit")
            break;
        
        std::cout << "camelCase: " << kebabToCamel(input) << '\n';
    }
    
    return 0;
}