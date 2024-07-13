#include <iostream>
#include <string>
#include <cctype>

std::string camelCase(std::string& str) {
    std::string result = "";
    while (!str.empty() && ((str[0] == '-') || (str[0] == ' '))) {
        if (str[0] == '-') {
            str.erase(0, 1);
        } else {
            str.erase(0, 1);
            if (result.empty()) {
                result += toupper(str[0]);
                str.erase(0, 1);
            } else {
                result += towlower(str[0]);
                str.erase(0, 1);
            }
        }
    }

    while (!str.empty() && ((str[0] == '-') || (str[0] == ' '))) {
        if (str[0] == '-') {
            str.erase(0, 1);
        } else {
            str.erase(0, 1);
            result += towlower(str[0]);
            str.erase(0, 1);
        }
    }

    if (!str.empty()) {
        if (result.empty()) {
            result += toupper(str[0]);
            str.erase(0, 1);
        } else {
            result += towupper(str[0]);
            str.erase(0, 1);
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