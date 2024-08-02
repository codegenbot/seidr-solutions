#include <iostream>
#include <algorithm>
#include <string>

int count_distinct_characters(const std::string& str) {
    std::string sorted_str = str;
    std::transform(sorted_str.begin(), sorted_str.end(), sorted_str.begin(), ::tolower);
    std::sort(sorted_str.begin(), sorted_str.end());
    sorted_str.erase(std::unique(sorted_str.begin(), sorted_str.end()), sorted_str.end());
    return sorted_str.size();
}

int main() {
    std::string input_str;
    std::getline(std::cin, input_str);
    int result = count_distinct_characters(input_str);
    std::cout << result << std::endl;

    return 0;
}