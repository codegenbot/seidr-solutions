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
    // Test cases to ensure the correctness of the longest function
    assert(longest({"x", "yyy", "zzzz", "www", "kkkk", "abc"}) == "zzzz");
    assert(longest({}) == "None");
    assert(longest({"a", "bb", "ccc", "dddd"}) == "dddd");
    // Additional function calls for user input if needed
    return 0;
}