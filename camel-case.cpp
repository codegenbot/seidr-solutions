```cpp
#include <iostream>
#include <sstream>
#include <string>
#include <cctype>

std::string camelCase(const std::string& input) {
    std::stringstream stream;
    bool capitalizeNext = true;

    for (char c : input) {
        if (c == '-') {
            capitalizeNext = true;
        } else if (capitalizeNext) {
            stream << toupper(c);
            capitalizeNext = false;
        } else {
            stream << tolower(c);
        }
    }

    return stream.str();
}

int main() {
    std::string input;
    std::cout << "Enter your kebab-case string: ";
    std::getline(std::cin, input);
    std::cout << camelCase(input) << std::endl;
    return 0;
}