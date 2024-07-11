#include <iostream>
#include <string>
#include <sstream>

std::string camelCase(const std::string& s) {
    std::stringstream ss(s);
    std::string result;
    bool capitalize = true;

    while (ss >> s) {
        if (!capitalize) {
            result += s;
        } else {
            result += toupper(s[0]);
            result += tolower(&s[1]);
        }
        capitalize = false;
    }

    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string in kebab-case: ";
    std::getline(std::cin, input);

    std::cout << "Resulting camelCase string: " << camelCase(input) << std::endl;

    return 0;
}