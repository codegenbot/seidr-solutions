```cpp
#include <iostream>
#include <string>
#include <cctype>

std::string camelCase(const std::string& str) {
    std::string result = "";
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

    return result;
}

int main() {
    std::string input;
    std::cout << "Enter your string (in kebab-case): ";
    std::getline(std::cin, input);

    while(std::cin.peek() == '\n') { // check if there's a newline left
        std::cin.get(); // replace with this line
    }
    std::cout << "Camel Case: " << camelCase(input) << std::endl;
    return 0;
}