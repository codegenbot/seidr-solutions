#include <iostream>
#include <string>
#include <cctype>

std::string camelCase(std::string& str) {
    std::string result = "";
    while (str.find(" ") != std::string::npos || str.find("-") != std::string::npos) {
        size_t pos = str.find(" ");
        if (pos == std::string::npos) {
            pos = str.find("-");
        }
        if (result.empty()) {
            result += toupper(str[0]);
            str.erase(0, 1);
        } else {
            result += towlower(str[0]);
            str.erase(0, 1);
        }
    }

    if (str.length() > 0) {
        result += towupper(str[0]);
        str.erase(0, 1);
    }

    while (!str.empty()) {
        size_t pos = str.find(" ");
        if (pos == std::string::npos) {
            pos = str.length();
        }
        result += str.substr(0, pos);
        str.erase(0, pos);
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