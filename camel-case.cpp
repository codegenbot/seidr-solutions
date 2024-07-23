```cpp
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
    std::string input, group;
    std::string output;

    while (std::getline(std::cin, input)) {
        output += camelCase(group) + ((output.length() > 0)? " ": "");
        std::istringstream iss(input);
        bool first = true;
        while (std::getline(iss, group, '-')) {
            if (!group.empty()) {
                if (!first) {
                    output += capitalizeFirstLetter(group);
                } else {
                    first = false;
                    output += group + " ";
                }
            }
        }
    }

    std::cout << output;
    return 0;
}

std::string capitalizeFirstLetter(const std::string& str) {
    if (str.empty()) {
        return str;
    }
    std::string result = str;
    result[0] = toupper(result[0]);
    return result;
}