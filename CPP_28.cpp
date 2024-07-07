#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> concatenate(const std::vector<std::string>& strings) {
    if (strings.empty()) {
        return {};
    }

    std::string prefix = strings[0];
    for (int i = 1; i < strings.size(); ++i) {
        if (strings[i] == prefix) {
            std::cout << strings[i] << " ";
        } else {
            std::cout << prefix + strings[i] << " ";
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