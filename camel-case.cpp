#include <iostream>
#include <string>
#include <sstream>

std::string kebabToCamel(const std::string& str) {
    std::stringstream ss(str);
    std::string result;
    bool capitalize = true;

    for (std::string segment; ss >> segment;) {
        if (capitalize) {
            for (char c : segment) {
                result += toupper(c);
                capitalize = false;
            }
        } else {
            result += " " + segment;
            capitalize = true;
        }
    }

    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string in kebab-case: ";
    std::getline(std::cin, input);

    std::cout << "The camelCase conversion is: " << kebabToCamel(input) << std::endl;

    return 0;
}