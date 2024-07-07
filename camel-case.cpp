```c++
#include <iostream>
#include <sstream>
#include <string>

std::string kebabToCamel(const std::string& s) {
    std::stringstream result;
    bool capitalizeNext = false;

    for (char c : s) {
        if (c == '-' || c == ' ') { 
            capitalizeNext = true;
        } else if (capitalizeNext) {
            result << toupper(c);
            capitalizeNext = false;
        } else {
            result << tolower(c);
        }
    }

    return result.str();
}

int main() {
    std::string s;
    std::cout << "Enter a string in kebab-case: ";
    std::getline(std::cin, s);

    std::cout << "CamelCase conversion: " << kebabToCamel(s) << std::endl;

    return 0;
}