```c
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
    while (std::getline(std::cin, input)) {
        std::istringstream iss(input);
        std::string group;
        std::string output = ""; // Declare an empty output string

        while (std::getline(iss, group, '-')) {
            if (!group.empty()) {
                output += camelCase(group) + ((output.length() > 0)? " ": "");
            }
        }
        std::cout << output << std::endl;
    }
    return 0;
}