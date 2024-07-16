#include <iostream>
#include <string>

std::string kebabToCamel(const std::string& s) {
    std::string result;
    bool first = true;

    for (char c : s) {
        if (c == '-') {
            first = false;
        } else if (!first) {
            result[0] = toupper(c);
            result.insert(1, 1, c);
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

    std::cout << "Result: " << kebabToCamel(input) << std::endl;

    return 0;
}