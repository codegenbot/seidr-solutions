#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> concatenate(const std::vector<std::string>& strings) {
    if (strings.empty()) {
        return {};
    }

    std::string prefix = strings[0];
    for (auto it = strings.begin() + 1; it != strings.end(); ++it) {
        if (*it == prefix) {
            // process same strings
        } else {
            // concatenate different strings
        }
    }
    return {};
}

int main() {
    std::vector<std::string> strings;
    std::string input;

    while (std::cin >> input) {
        strings.push_back(input);
    }

    if (!strings.empty()) {
        concatenate(strings);
    } else {
        std::cout << "No strings to concatenate." << std::endl;
    }

    return 0;
}