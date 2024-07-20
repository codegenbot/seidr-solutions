#include <iostream>
#include <string>
#include <cctype>

std::string camelCase(const std::string& str) {
    std::string result = "";
    bool upper = true;

    for (char c : str) {
        if (c == '-') {
            if (!upper) {
                result += ' ';
                upper = true;
            }
        } else {
            result += upper ? toupper(c) : tolower(c);
            upper = false;
        }
    }

    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string in kebab-case: ";
    std::getline(std::cin, input);
    std::cout << "Camel case: " << camelCase(input) << std::endl;
    return 0;
}