```c++
#include <iostream>
#include <string>

std::string camelCase(std::string s) {
    std::string result;
    bool capitalizeNext = true;

    for (char c : s) {
        if (c == ' ') {
            result += c;
            capitalizeNext = true;
        } else if (c == '-') {
            result += c;
            capitalizeNext = true;
        } else {
            if (capitalizeNext) {
                result += toupper(c);
                capitalizeNext = false;
            } else {
                result += tolower(c);
            }
        }
    }

    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string in kebab-case: ";
    std::cin >> input;
    std::cout << "The camelCase conversion is: " << camelCase(input) << std::endl;
    return 0;
}