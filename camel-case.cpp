#include <iostream>
#include <string>

std::string camelCase(const std::string& input) {
    std::string result;
    bool nextCapital = true;

    for (char c : input) {
        if (c == '-') {
            nextCapital = true;
        } else if (nextCapital) {
            result += toupper(c);
            nextCapital = false;
        } else {
            result += tolower(c);
        }
    }

    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string in kebab-case: ";
    std::cin >> input;
    std::cout << "Resulting camelCase string: " << camelCase(input) << std::endl;

    return 0;
}