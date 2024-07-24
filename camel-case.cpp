#include <iostream>
#include <string>

std::string camelCase(const std::string& str) {
    if (str.empty()) return str;

    std::string result = "";
    bool capitalizeNextLetter = true;

    for (char c : str) {
        if (c == '-') {
            capitalizeNextLetter = true;
        } else if (capitalizeNextLetter) {
            result += toupper(c);
            capitalizeNextLetter = false;
        } else {
            result += tolower(c);
        }
    }

    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string in kebab-case: ";
    std::getline(std::cin, input);
    std::cout << "camelCase: " << camelCase(input) << std::endl;

    return 0;
}