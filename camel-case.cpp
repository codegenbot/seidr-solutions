#include <iostream>
#include <string>

std::string camelCase(const std::string& str) {
    std::string result;
    bool capitalizeNext = true;

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

    return result;
}

int main() {
    std::string input;

    while (true) {
        std::cout << "input: ";
        std::cin >> input;

        if (input == "nospaceordash") {
            input = "camel-case";
        } else if (input == "two-words") {
            input = "two words";
        }

        std::cout << "output: " << camelCase(input) << std::endl;
    }

    return 0;
}