#include <iostream>
#include <string>
#include <sstream>

std::string camelCase(const std::string& input) {
    std::string output;
    bool capitalizeNext = true;

    for (char c : input) {
        if (c == '-') {
            capitalizeNext = true;
        } else if (capitalizeNext) {
            output += toupper(c);
            capitalizeNext = false;
        } else {
            output += tolower(c);
        }
    }

    return output;
}

int main() {
    std::string input;
    while (std::getline(std::cin, input)) {
        std::istringstream iss(input);
        std::cout << camelCase(input);
        while (std::getline(iss, input, '-')) {
            if (!input.empty()) {
                std::cout << camelCase(input) + ((std::cout.tellp() > 0)? " ": "");
            }
        }
    }
    return 0;
}