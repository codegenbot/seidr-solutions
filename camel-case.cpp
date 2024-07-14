#include <iostream>
#include <string>

std::string camelCase(std::string str) {
    std::string result = "";
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '-') {
            i++; // skip the '-'
            while (i < str.length() && str[i] == ' ') {
                i++; // skip the spaces
            }
            if (result != "") {
                result += std::toupper(str[i]);
            } else {
                result = std::toupper(str[i]);
            }
        } else if (str[i] != ' ') {
            if (i > 0 && str[i-1] == '-') {
                continue;
            }
            if (result != "") {
                result += std::tolower(str[i]);
            } else {
                result = std::tolower(str[i]);
            }
        }
    }
    return result;
}

int main() {
    std::string input;
    while (true) {
        std::cout << "Enter a string in kebab-case: ";
        std::cin >> input;
        std::cout << "The camelCase equivalent is: " << camelCase(input) << std::endl;
    }
    return 0;
}