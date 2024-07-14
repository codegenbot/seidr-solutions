```cpp
#include <iostream>
#include <string>
#include <cctype>

std::string camelCase(std::string& str) {
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

    if (!result.empty()) {
        result.erase(0, 1);
    }

    return result;
}

int main() {
    std::string input;
    bool wasInputCleared = false;

    while(true) {
        std::cout << "Enter your string (in kebab-case): ";
        if (!wasInputCleared)
            std::getline(std::cin, input);
        else 
            input.erase(0);

        if (!input.empty()) { 
            std::string output = camelCase(input);
            if(!output.empty())  
                std::cout << "Camel Case: " << std::move(output) << std::endl; 
        }
        
        wasInputCleared = true;
    }
    return 0;
}