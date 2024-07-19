#include <algorithm>
#include <iostream>
#include <string>

int count_distinct_characters(std::string str) {
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    sort(str.begin(), str.end());
    return std::distance(str.begin(), std::unique(str.begin(), str.end()));
}

int main() {
    std::string input;
    std::getline(std::cin, input);
    std::cout << count_distinct_characters(input) << std::endl;
    return 0;
}