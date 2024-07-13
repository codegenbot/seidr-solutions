#include <iostream>
#include <string>
#include <sstream>

std::string kebabToCamel(const std::string& s) {
    std::stringstream ss;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == '-' || s[i] == ' ') {
            while (i < s.size() && (s[i] == '-' || s[i] == ' ')) {
                ++i;
            }
            if (i < s.size()) {
                ss << toupper(s[i]);
            }
        } else {
            ss << tolower(s[i]);
        }
    }
    return ss.str();
}

int main() {
    std::string input;
    std::cout << "Enter a string in kebab-case: ";
    std::getline(std::cin, input);
    std::cout << "The camelCase equivalent is: " << kebabToCamel(input) << std::endl;
    return 0;
}