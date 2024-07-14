```cpp
#include <iostream>
#include <string>
#include <cctype>

std::string camelCase(const std::string& str) {
    std::string result;
    bool capitalize = true;

    for (char c : str) {
        if (c == '-') {
            result.push_back(' ');
            capitalize = true; 
        } else if (capitalize) { 
            result.push_back(toupper(c));
            capitalize = false; 
        } else {
            result.push_back(tolower(c)); 
        }
    }

    if (!result.empty() && result[0] == ' ') {
        result.erase(0, 1);
    }

    return result;
}

int main() {
    std::string input;

    while(true) {
        std::cout << "Enter your string (in kebab-case): ";
        std::getline(std::cin, input);
        
        if (!input.empty()) { 
            std::string output = camelCase(input);
            if(!output.empty())  
                std::cout << "Camel Case: " << output << std::endl; 
        }
    }
    return 0;
}