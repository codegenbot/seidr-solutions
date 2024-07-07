#include <iostream>
#include <string>
#include <cctype>

std::string camelCase(std::string s) {
    std::string result;
    bool capitalizeNext = false;

    for (char c : s) {
        if (c == '-' || c == ' ') { 
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
    std::string s;
    std::cout << "Enter a string in kebab-case: ";
    std::getline(std::cin, s);

    std::string output = camelCase(s);
    std::cout << "The output is: " << output << std::endl;

    return 0;
}