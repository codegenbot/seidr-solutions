#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> concatenate(const std::vector<std::string>& strings) {
    if (strings.empty()) {
        return {};
    }

    std::string prefix = strings[0];
    for (const auto& str : strings.substr(1)) {
        if (str == prefix) {
            std::cout << str << " ";
        } else {
            std::cout << prefix + str << " ";
        }
    }
}

int main() {
    std::vector<std::string> strings;
    std::string input;

    while (std::cin >> input) {
        strings.push_back(input);
    }

    concatenate(strings);

    return 0;
}