#include <iostream>
#include <string>

std::string camelCase(const std::string& input) {
    std::string result;
    bool capitalize = true;

    for (char c : input) {
        if (c == '-') {
            capitalize = true;
        } else if (capitalize) {
            result += toupper(c);
            capitalize = false;
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
        if (input == "nospaceordash" || input == "two-words" || input == "all separate words") {
            break;
        }
        std::cout << "output: " << camelCase(input) << "\n";
    }
    return 0;
}