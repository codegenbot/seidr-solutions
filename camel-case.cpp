```cpp
#include <iostream>
#include <string>
#include <cctype>

std::string camelCase(const std::string& str) {
    std::string result;
    bool capitalize = false;

    for (char c : str) {
        if (c == '-') {
            result.push_back(' ');
            capitalize = true; 
        } else {
            if(capitalize) { 
                result.push_back(toupper(c));
                capitalize = false; 
            } else {
                result.push_back(tolower(c)); 
            }
        }
    }

    if (!result.empty()) {
        // Correctly use the `substr` method
        if(result[0] >= 'A' && result[0] <= 'Z') {
            return result;
        } else {
            result[0] = toupper(result[0]);
            return result;
        }
    }

    return "";
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