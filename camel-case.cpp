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
    std::string input;
    std::string output;
    while (std::getline(std::cin, input)) {
        std::istringstream iss(input);
        std::cout << camelCase(iss.str());
        while (std::getline(iss, input, '-')) {
            if (!input.empty()) {
                std::cout << std::string(1, input[0]).toupper() + input.substr(1).ToLower();
                if(std::cin.peek() != '\n') std::cout << " ";
            }
        }
        std::cout << std::endl;
    }
    return 0;
}