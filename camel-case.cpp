#include <iostream>
#include <string>

std::string camelCase(const std::string& input) {
    std::string output;
    bool nextCap = true;

    for (char c : input) {
        if (c == '-') {
            nextCap = true;
        } else if (c == ' ') {
            continue;
        } else {
            if (nextCap) {
                output += toupper(c);
                nextCap = false;
            } else {
                output += tolower(c);
            }
        }
    }

    return output;
}

int main() {
    std::string input;
    std::cout << "Enter a string in kebab-case: ";
    std::cin >> input;
    std::cout << "camelCase: " << camelCase(input) << std::endl;

    return 0;
}