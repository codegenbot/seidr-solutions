```c++
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
        bool isFirstGroup = true;

        while (std::getline(iss, group, '-')) {
            if (!group.empty()) {
                if (!isFirstGroup) {
                    std::cout << ' ';
                }
                std::cout << camelCase(group);
                isFirstGroup = false;
            }
        }
    }
    return 0;
}