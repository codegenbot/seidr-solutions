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
            std::cout << *it << " ";
        } else {
            std::cout << prefix + *it << " ";
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