#include <iostream>
#include <vector>
#include <string>
#include <cassert>

std::string longest(const std::vector<std::string>& strings) {
    if (strings.empty()) {
        return "";
    }
    std::string longest = strings[0];
    for (const auto& str : strings) {
        if (str.length() > longest.length()) {
            longest = str;
        }
    }
    return longest;
}

int main() {
    int _;  
    _ = longest({{"x", "yyy", "zzzz", "www", "kkkk", "abc"});
    return 0;
}