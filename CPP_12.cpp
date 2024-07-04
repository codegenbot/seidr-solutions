#include <iostream>
#include <vector>
#include <string>

std::string longest(const std::vector<std::string>& strings) {
    if (strings.empty()) return "None";
    std::string longestStr = "";
    for (const std::string& str : strings) {
        if (str.length() > longestStr.length()) {
            longestStr = str;
        }
    }
    return longestStr;
}

int main() {
    std::vector<std::string> inputs = {"x", "yyy", "zzzz", "www", "kkkk", "abc"};
    std::cout << "Longest string: " << longest(inputs) << std::endl;
    return 0;
}