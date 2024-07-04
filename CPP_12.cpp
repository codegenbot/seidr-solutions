#include <iostream>
#include <vector>
#include <string>
#include <cassert>

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
    assert(longest({"x", "yyy", "zzzz", "www", "kkkk", "abc"}) == "zzzz");
    std::cout << "All tests passed!" << std::endl;
    std::vector<std::string> input;
    int n;
    std::cout << "Enter number of strings: ";
    std::cin >> n;
    std::cin.ignore(); // Clear newline character from the buffer
    for (int i = 0; i < n; ++i) {
        std::string temp;
        std::getline(std::cin, temp);
        input.push_back(temp);
    }
    std::string result = longest(input);
    std::cout << "Longest string: " << result << std::endl;
    return 0;
}