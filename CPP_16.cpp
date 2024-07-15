#include <algorithm>
#include <string>
#include <iostream>

int count_distinct_characters(const std::string& str) {
    std::string temp = str;
    std::transform(temp.begin(), temp.end(), temp.begin(), ::tolower);
    std::sort(temp.begin(), temp.end());
    auto it = std::unique(temp.begin(), temp.end());
    return std::distance(temp.begin(), it);
}

int main() {
    std::cout << (count_distinct_characters("Jerry jERRY JeRRRY") == 5);
    return 0;
}