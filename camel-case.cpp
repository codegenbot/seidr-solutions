#include <iostream>
#include <string>

std::string camelCase(std::string str) {
    str.erase(0, str.find_first_not_of(' ')); // Remove leading space(s)
    str.erase(0, str.find('-')); // Remove leading hyphen(s)

    std::string result = "";
    bool isNextUpper = false;
    for (char c : str) {
        if (c == '-' || c == ' ') {
            if (!isNextUpper && c != '-') {
                if (!result.empty()) {
                    result.back() ? (result += std::tolower(result.back())) : (result += std::toupper(result.back()));
                }
                result += c;
            } else {
                continue;
            }
        } else {
            result += isNextUpper ? std::tolower(c) : std::toupper(c);
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