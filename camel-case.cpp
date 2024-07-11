#include <iostream>
#include <string>

std::string kebabToCamel(const std::string& str) {
    if (str.empty()) return str;

    std::string result;
    bool first = true;

    for (char c : str) {
        if (c == '-') {
            first = true;
        } else if (first) {
            result += toupper(c);
            first = false;
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

    std::cout << "The camelCase representation is: " << kebabToCamel(input) << std::endl;

    return 0;
}