#include <iostream>
#include <string>

std::string camelCase(const std::string& str) {
    std::string result;
    bool capitalize = true;

    for (char c : str) {
        if (c == '-' || c == ' ') { 
            capitalize = true;
        } else if (capitalize && islower(c)) { 
            result += toupper(c);
            capitalize = false;
        } else {
            if (capitalize) {
                result += toupper(c);
                capitalize = false;
            } else {
                result += tolower(c);
            }
        }
    }

    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string in kebab-case: ";
    std::getline(std::cin, input);

    if (input.empty()) {
        std::cout << "Please enter a non-empty string." << std::endl;
    } else {
        std::cout << "camelCase: " << camelCase(input) << "\n";
    }
    return 0;
}