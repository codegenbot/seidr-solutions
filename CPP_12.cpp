#include <iostream>
#include <vector>
#include <string>

std::string longest(const std::vector<std::string>& strings) {
    if (strings.empty()) {
        return "None";
    }

    std::string longestStr = strings[0];
    for (const auto& str : strings) {
        if (str.length() > longestStr.length()) {
            longestStr = str;
        }
    }
    return longestStr;
}

int main() {
    for (std::string s; std::getline(std::cin, s); ) {
        std::vector<std::string> strings;
        std::string word;
        std::istringstream stream(s);
        while (stream >> word) {
            strings.push_back(word);
        }
        std::cout << longest(strings) << std::endl;
    }
    return 0;
}