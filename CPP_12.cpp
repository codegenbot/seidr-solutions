#include <iostream>
#include <vector>
#include <string>

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

int main(){
    std::vector<std::string> input;
    std::string word;
    while (std::cin >> word) {
        input.push_back(word);
    }
    std::cout << longest(input);
    return 0;
}