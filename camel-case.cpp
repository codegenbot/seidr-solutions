```cpp
#include <iostream>
#include <string>
#include <cctype>

std::string camelCase(const std::string& str) {
    if(str.empty()) return "";
    std::string result;
    bool capitalize = true;

    for (char c : str) {
        if (c == '-') {
            result += ' ';
            capitalize = true; 
        } else if (capitalize) { 
            result += toupper(c);
            capitalize = false; 
        } else {
            result += tolower(c); 
        }
    }

    return (result.size() > 0 ? toupper(result[0]) : '') + result.substr(1);
}

int main() {
    std::string input;

    std::cout << "Enter your string (in kebab-case): ";
    std::getline(std::cin, input);
    
    if (!input.empty()) { 
        std::string output = camelCase(input);
        if(!output.empty())  
            std::cout << "Camel Case: " << output << std::endl; 
    }
    return 0;
}