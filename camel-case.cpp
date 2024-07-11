#include <iostream>
#include <string>

std::string kebabToCamel(const std::string& input) {
    std::string output;
    bool first = true;

    for (char c : input) {
        if (c == '-') {
            output.push_back(char(toupper(c)));
        } else if (first) {
            output += tolower(c);
            first = false;
        } else {
            output += char(toupper(c));
        }
    }

    return output;
}

int main() {
    std::string input;
    std::cout << "Enter a string in kebab-case: ";
    std::getline(std::cin, input);

    std::cout << "The equivalent camelCase is: " << kebabToCamel(input) << std::endl;

    return 0;
}