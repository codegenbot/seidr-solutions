#include <iostream>
#include <vector>
#include <string>

std::string longest(const std::vector<std::string>& strings) {
    if (strings.empty()) {
        return "";
    }

    auto max_length = 0;
    auto longest_string = "";

    for (const auto& str : strings) {
        if (str.size() > max_length) {
            max_length = str.size();
            longest_string = str.c_str();
        }
    }

    return longest_string;
}