#include <iostream>
#include <string>

std::string camelCase(std::string str) {
    std::string result = "";
    bool capitalizeNext = true;

    for (char c : str) {
        if (c == '-') {
            capitalizeNext = true;
        } else if (capitalizeNext) {
            result += std::toupper(c);
            capitalizeNext = false;
        } else {
            result += std::tolower(c);
        }
    }

    return result;
}

int main() {
    int numTestCases;

    std::cin >> numTestCases;

    for (int i = 0; i < numTestCases; i++) {
        std::string str;
        std::cin >> str;
        std::cout << camelCase(str) << std::endl;
    }

    return 0;
}