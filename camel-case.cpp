#include <iostream>
#include <string>

std::string kebabToCamel(const std::string& str) {
    if (str.empty()) return str;
    
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
    std::string str;
    std::cout << "Enter a string in kebab-case: ";
    std::cin >> str;
    std::cout << "CamelCase: " << kebabToCamel(str) << std::endl;
    return 0;
}