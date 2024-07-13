#include <iostream>
#include <string>
#include <cctype>

std::string camelCase(std::string& str) {
    while (str.find(" ") != std::string::npos || str.find("-") != std::string::npos) {
        size_t pos = str.find(" ");
        if (pos == std::string::npos) {
            pos = str.find("-");
        }
        str[0] = toupper(str[0]);
        str.erase(0, pos + 1);
    }
    str[0] = toupper(str[0]);

    return str;
}

int main() {
    std::string input;
    std::cout << "Enter a string in kebab-case: ";
    std::getline(std::cin, input);
    std::cout << camelCase(input) << std::endl;
    return 0;
}