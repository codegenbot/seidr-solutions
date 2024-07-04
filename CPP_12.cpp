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
    std::vector<std::string> inputStrings;
    std::string s;
    while (std::cin >> s) {
        inputStrings.push_back(s);
    }
    std::cout << longest(inputStrings) << std::endl;
    return 0;
}