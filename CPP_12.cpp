#include <iostream>
#include <vector>
#include <string>

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
    std::cin >> n;
    std::vector<std::string> strings(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> strings[i];
    }
    std::cout << longest(strings) << std::endl;
    return 0;
}