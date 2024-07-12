#include <iostream>
#include <string>
#include <cctype>

std::string camelCase(const std::string& s) {
    std::string result;
    bool capitalize = true;

    for (char c : s) {
        if (std::isspace(c)) {
            continue; // skip spaces and hyphens
        } else if (capitalize) {
            result += std::toupper(c);
            capitalize = false;
        } else {
            result += std::tolower(c);
        }
    }

    return result;
}

int main() {
    std::string input;
    std::cin >> input;

    std::cout << camelCase(input) << std::endl;

    return 0;
}