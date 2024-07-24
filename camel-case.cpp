#include <iostream>
#include <string>

std::string kebabToCamel(const std::string& s) {
    std::string result;
    bool nextWordIsCapital = false;

    for (char c : s) {
        if (c == '-') {
            nextWordIsCapital = true;
        } else if (nextWordIsCapital) {
            result += char(toupper(c));
            nextWordIsCapital = false;
        } else {
            result += c;
        }
    }

    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string in kebab-case: ";
    std::getline(std::cin, input);
    std::cout << "The camelCase equivalent is: " << kebabToCamel(input) << std::endl;

    return 0;
}