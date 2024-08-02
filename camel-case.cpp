#include <iostream>
#include <string>

std::string camelCase(const std::string& str) {
    std::string result;
    bool capitalize = true;

    for (char c : str) {
        if (c == '-') {
            capitalize = true;
        } else if (capitalize || c != '-') {
            if (capitalize) {
                result += toupper(c);
            } else {
                result += tolower(c);
            }
            capitalize = false;
        }
    }

    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string in kebab-case: ";
    std::getline(std::cin, input);

    std::cout << "Resulting camelCase: " << camelCase(input) << std::endl;

    return 0;
}