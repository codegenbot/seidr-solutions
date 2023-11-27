#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

std::string longest(std::vector<std::string> strings) {
    if (strings.empty()) {
        return "None";
    }
    auto longestString = std::max_element(strings.begin(), strings.end(),
        [](const std::string& a, const std::string& b) {
            return a.length() < b.length();
        });
    return *longestString;
}