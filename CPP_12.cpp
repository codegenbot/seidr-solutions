#include <iostream>
#include <vector>
#include <string>

std::string longest(const std::vector<std::string>& strings) {
    if (strings.empty()) return "None";
    std::string longestStr = strings[0];
    for (const auto& str : strings) {
        if (str.length() > longestStr.length()) {
            longestStr = str;
        }
    }
    return longestStr;
}

int main() {
    std::vector<std::string> strings;
    std::string input;
    while (std::cin >> input) {
        strings.push_back(input);
    }
    std::cout << longest(strings) << std::endl;
    return 0;
}