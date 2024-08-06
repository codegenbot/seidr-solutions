#include <vector>
#include <iostream>
#include <string>

std::string camelCase(const std::string& input) {
    std::string result;
    bool capitalizeNext = true;

    for (char c : input) {
        if (c == '-') {
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
    std::string input;
    while (std::cin >> input) {
        std::cout << camelCase(input) << std::endl;
    }
    return 0;
}