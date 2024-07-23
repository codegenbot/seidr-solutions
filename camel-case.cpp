#include <iostream>
#include <string>
#include <sstream>

std::string camelCase(const std::string& input) {
    std::string output;
    bool capitalizeNext = true;

    for (char c : input) {
        if (c == '-') {
            capitalizeNext = true;
        } else if (capitalizeNext) {
            output += toupper(c);
            capitalizeNext = false;
        } else {
            output += tolower(c);
        }
    }

    return output;
}

int main() {
    std::string input, output;

    while (std::getline(std::cin, input)) {
        std::istringstream iss(input);
        output = camelCase(input);

        while (std::getline(iss, input, '-')) {
            if (!input.empty()) {
                output += (capitalizeNext ? toupper(input[0]) : tolower(input[0])) + input.substr(1) + ((output.length() > 0)? "": "");
                capitalizeNext = true;
            }
        }

        std::cout << output << std::endl;
    }
    return 0;
}