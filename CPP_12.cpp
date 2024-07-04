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
    std::vector<std::string> inputs;
    std::string input;
    while (std::getline(std::cin, input) && !input.empty()) {
        inputs.push_back(input);
    }
    std::cout << "Longest string: " << longest(inputs) << std::endl;
    return 0;
}