#include <iostream>
#include <cctype>

std::string camelCase(std::string str) {
    std::string result = "";
    bool capitalizeNext = false;

    for (char c : str) {
        if (c == '-' || c == ' ') {
            if (capitalizeNext) {
                result += toupper(c);
                capitalizeNext = false;
            } else {
                result += c;
            }
        } else {
            if (!capitalizeNext) {
                result += tolower(c);
                capitalizeNext = true;
            } else {
                result += toupper(c);
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