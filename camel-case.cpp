#include <iostream>
#include <string>
#include <cctype>

std::string camelCase(const std::string& str) {
    std::string result = "";
    bool upper = true;

    for (char c : str) {
        if (c == '-') {
            if (!result.empty()) {
                upper = true;
            }
        } else {
            if (upper) {
                result += toupper(c);
                upper = false;
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
    std::cout << "Camel case: " << camelCase(input) << std::endl;
    return 0;
}