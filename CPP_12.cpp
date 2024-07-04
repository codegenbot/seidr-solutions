#include <iostream>
#include <vector>
#include <string>
#include <cassert>

std::string longest(const std::vector<std::string>& strings) {
    if (strings.empty()) return "None";
    std::string longestStr = "";
    for (const auto& str : strings) {
        if (str.length() > longestStr.length()) {
            longestStr = str;
        }
    }
    return longestStr;
}

int main() {
    assert(longest({"x", "yyy", "zzzz", "www", "kkkk", "abc"}) == "zzzz");
    return 0;
}