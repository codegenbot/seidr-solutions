#include <iostream>
#include <string>

std::string camelCase(std::string input) {
    std::string output;
    int i = 0;

    while (i < input.length()) {
        if (input[i] == '-') {
            i++;
            output += toupper(input[i]);
        } else {
            if (output.length() > 0 && output[output.length()-1] != '.') {
                output += ' ';
            }
            output += tolower(input[i]);
        }
        i++;
    }

    return output;
}

int main() {
    std::string input;

    while (true) {
        std::cout << "Enter a kebab-case string: ";
        std::getline(std::cin, input);
        if (input == "nospaceordash") break;
        std::cout << "CamelCase: " << camelCase(input) << "\n";
    }

    return 0;
}