#include <iostream>
#include <string>

std::string camelCase(std::string str) {
    str.erase(0, str.find_first_not_of(' ')); // Remove leading space(s)
    str.erase(0, str.find('-')); // Remove leading hyphen(s)

    std::string result = "";
    bool isNextUpper = false;
    for (char c : str) {
        if (!isNextUpper && (c == '-' || c == ' ')) {
            if (result.back() != ' ') { // Add space only if not already present
                result += ' ';
            }
            isNextUpper = false;
        } else if (c != '-' && c != ' ') {
            if (!isNextUpper) {
                result += std::toupper(c);
                isNextUpper = true;
            } else {
                result += std::tolower(c);
            }
        } else {
            if (result.back() != '-') { // Add hyphen only if not already present
                result += '-';
            }
            isNextUpper = false;
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