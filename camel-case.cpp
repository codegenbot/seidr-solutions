#include <iostream>
#include <string>

std::string camelCase(const std::string& str) {
    std::string result;
    bool first = true;
    char prev = ' ';

    for (char c : str) {
        if (c == '-') {
            if (!first || prev != ' ')
                result += c;
            else
                first = false;
        } else if (c == ' ') {
            first = true;
            continue;
        }
        prev = c;
        if (!first)
            result += std::tolower(c);
        else
            result += std::toupper(c);

        first = false;
    }

    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string in kebab-case: ";
    std::getline(std::cin, input);

    std::cout << "The camelCase conversion is: " << camelCase(input) << std::endl;

    return 0;
}