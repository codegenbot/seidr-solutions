#include <iostream>
#include <string>

std::string kebabToCamel(const std::string& s) {
    std::string result;
    bool nextCap = true;

    for (char c : s) {
        if (c == '-') {
            nextCap = true;
        } else if (nextCap) {
            result += toupper(c);
            nextCap = false;
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

    std::cout << "The equivalent camelCase is: " << kebabToCamel(input) << std::endl;

    return 0;
}