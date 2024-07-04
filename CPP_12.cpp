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
    int n;
    std::cout << "Enter the number of strings: ";
    std::cin >> n;
    std::vector<std::string> strings(n);
    std::cout << "Enter the strings: " << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cin >> strings[i];
    }
    std::cout << "The longest string is: " << longest(strings) << std::endl;
    return 0;
}