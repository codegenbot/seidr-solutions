#include <iostream>
#include <string>

std::string camelCase(std::string str) {
    str.erase(0, str.find_first_not_of(' ')); // Remove leading space(s)
    while (str.find('-') == 0) {
        str.erase(0, 1);
    }

    std::string result = "";
    bool isNextUpper = true;
    for (char c : str) {
        if (c == '-' || c == ' ') {
            // New word
            if (!result.empty()) {
                if (!isNextUpper && result.back() != '-') {
                    result.back() ? (result += std::tolower(result.back())) : (result += std::toupper(result.back()));
                }
            } else {
                isNextUpper = true;
            }
        } else {
            // Part of current word
            if (c == ' ') {
                continue;
            }
            result += isNextUpper ? std::toupper(c) : std::tolower(c);
            isNextUpper = !isNextUpper;
        }
    }
    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string in kebab-case: ";
    std::getline(std::cin, input);
    std::cout << camelCase(input) << std::endl;
    return 0;
}