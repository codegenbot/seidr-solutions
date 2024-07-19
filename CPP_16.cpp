#include <iostream>
#include <algorithm>

int count_distinct_characters(const std::string& s) {
    std::string str = s;
    std::transform(str.begin(), str.end(), str.begin(), ::tolower);
    std::sort(str.begin(), str.end());
    auto it = std::unique(str.begin(), str.end());
    return std::distance(str.begin(), it);
}