#include <iostream>
#include <string>

std::string camelCase(std::string str) {
    std::string result = "";
    bool capitalizeNext = true;

    if (str[0] != '-') { // handle the first character
        result += toupper(str[0]);
        for (int i = 1; i < str.length(); ++i) {
            if (str[i] == '-') {
                capitalizeNext = true;
            } else if (capitalizeNext) {
                result += toupper(str[i]);
                capitalizeNext = false;
            } else {
                result += tolower(str[i]);
            }
        }
    } else {
        for (char c : str) {
            if (c == '-') {
                capitalizeNext = true;
            } else if (capitalizeNext) {
                result += toupper(c);
                capitalizeNext = false;
            } else {
                result += tolower(c);
            }
        }
    }

    return result;
}

int main() {
    std::string str;
    while (std::cin >> str) {
        std::cout << camelCase(str) << std::endl;
    }
    return 0;
}