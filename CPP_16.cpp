#include <algorithm>
#include <iterator>
#include <iostream>

size_t count_distinct_characters(const std::string& str) {
    std::string temp = str;
    std::transform(temp.begin(), temp.end(), temp.begin(), ::tolower);
    std::sort(temp.begin(), temp.end());
    auto it = std::unique(temp.begin(), temp.end());
    return std::distance(temp.begin(), it);
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    
    size_t result = count_distinct_characters(input);
    std::cout << "Number of distinct characters: " << result << std::endl;

    return 0;
}