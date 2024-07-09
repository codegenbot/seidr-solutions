#include <string>
#include <iostream>

std::string camelCase(const std::string& str) {
    std::string result;
    bool capitalize = true;

    for (char c : str) {
        if (c == '-' || c == ' ') { 
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
    std::getline(std::cin, input);
    std::cout << camelCase(input) << std::endl;
    return 0;
}