#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

std::string longest(std::vector<std::string> strings) {
    if (strings.empty()) {
        return "None";
    }

    auto comp = [](const std::string &a, const std::string &b) {
        return a.length() < b.length() || (a.length() == b.length() && a < b);
    };

    return *std::max_element(strings.begin(), strings.end(), comp);
}