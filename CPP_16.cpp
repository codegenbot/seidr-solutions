#include <iostream>
#include <algorithm>
#include <string>

int count_distinct_characters(std::string str) {
    std::transform(str.begin(), str.end(), str.begin(), ::tolower);
    std::sort(str.begin(), str.end());
    return std::distance(str.begin(), std::unique(str.begin(), str.end()));
}

int main() {
    std::string input_str;
    std::cin >> input_str;

    int result = count_distinct_characters(input_str);
    std::cout << result;

    return 0;
}