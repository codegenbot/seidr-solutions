#include <iostream>
#include <cctype>

std::string camelCase(std::string str) {
    std::string result = "";
    bool capitalizeNext = true;

    for (char c : str) {
        if (c == '-' || c == ' ') {
            capitalizeNext = true;
        } else if (capitalizeNext) {
            result += toupper(c);
            capitalizeNext = false;
        } else {
            result += tolower(c);
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