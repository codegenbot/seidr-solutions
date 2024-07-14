```cpp
#include <iostream>
#include <string>
#include <cctype>

std::string camelCase(const std::string& str) {
    std::string result;
    bool capitalize = true;

    for (char c : str) {
        if (c == '-') {
            if (!result.empty()) {
                if (capitalize)
                    result += toupper(c);
                else
                    result += tolower(c);
                capitalize = !capitalize; 
            }
        } else if (capitalize) { 
            result += toupper(c);
            capitalize = false; 
        } else {
            result += tolower(c); 
        }
    }

    return result;
}

int main() {
    std::string input;

    while(true) {
        std::cout << "Enter your string (in kebab-case): ";
        std::getline(std::cin, input);

        if (!input.empty()) { 
            std::cout << "Camel Case: " << camelCase(input) << std::endl; 
        }
    }

    return 0;
}