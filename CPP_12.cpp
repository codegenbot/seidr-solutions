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
    assert(longest({}) == "None");
    assert(longest({"a", "bb", "ccc", "dddd"}) == "dddd");
    
    // User input functionality
    int n;
    std::cout << "Enter number of strings: ";
    std::cin >> n;
    std::vector<std::string> userStrings(n);
    std::cout << "Enter strings:" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cin >> userStrings[i];
    }
    std::cout << "Longest string is: " << longest(userStrings) << std::endl;
    
    return 0;
}