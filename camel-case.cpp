#include <iostream>
#include <string>

std::string camelCase(const std::string& str) {
    std::string result;
    bool capitalize = true;

    for (char c : str) {
        if (c == '-') {
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

    while (true) {
        std::cout << "Enter a string in kebab-case: ";
        std::cin >> input;
        std::cout << camelCase(input) << "\n";
    }

    return 0;
}