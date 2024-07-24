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
        std::string group;
        output.clear();
        
        while (std::getline(iss, group, '-')) {
            if (!group.empty()) {
                if (!output.empty())
                    output += " ";
                output += camelCase(group);
            }
        }
        std::cout << output << std::endl;
    }
    return 0;
}