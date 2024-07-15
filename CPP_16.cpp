#include <algorithm>
#include <string>
#include <iostream>
#include <cassert>  // Added include for assert

int count_distinct_characters(const std::string& str) {
    std::string temp = str;
    std::transform(temp.begin(), temp.end(), temp.begin(), ::tolower);
    std::sort(temp.begin(), temp.end());
    auto it = std::unique(temp.begin(), temp.end());
    return std::distance(temp.begin(), it);
}

int main() {
    std::string str;
    std::getline(std::cin, str);
    int result = count_distinct_characters(str);
    std::cout << result << std::endl;
    return 0;
}