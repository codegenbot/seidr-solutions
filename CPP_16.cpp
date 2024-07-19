#include <iostream>
#include <algorithm>

int count_distinct_characters(std::string str) {
    std::transform(str.begin(), str.end(), str.begin(), ::tolower);
    std::sort(str.begin(), str.end());
    return std::distance(str.begin(), std::unique(str.begin(), str.end()));
}

int main() {
    std::string input;
    std::cin >> input;
    std::cout << count_distinct_characters(input) << std::endl;
    return 0;
}