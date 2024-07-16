#include <iostream>
#include <string>
#include <sstream>
#include <cctype>

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
    std::string str;
    std::cout << "Enter a string in kebab-case: ";
    std::getline(std::cin, str);
    size_t pos = 0;
    while ((pos = str.find('-')) != std::string::npos) {
        str.replace(pos, 1, std::toupper(str[pos]));
        str.erase(pos, 1);
    }
    std::cout << "camelCase: " << camelCase(str) << std::endl;

    return 0;
}