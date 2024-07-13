```cpp
#include <iostream>
#include <string>
#include <cctype>

std::string camelCase(const std::string& str) {
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

    // Remove the leading space
    if (!result.empty()) {
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
            std::cout << "Camel Case: " << camelCase(input) << std::endl;
        }

        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    return 0;
}