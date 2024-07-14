#include <iostream>
#include <string>

std::string camelCase(const std::string& str) {
    std::string result;
    bool first = true;

    for (char c : str) {
        if (c == '-') {
            if (!first)
                result += std::toupper(c);
            else
                first = false;
        } else if (c == ' ') {
            first = true;
            result += std::tolower(c);
        } else {
            if (first)
                result += std::tolower(c);
            else
                result += std::toupper(c);
            first = false;
        }
    }

    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    std::cout << "Camel Case: " << camelCase(input) << std::endl;

    return 0;
}