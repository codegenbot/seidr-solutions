#include <iostream>
#include <algorithm>
#include <string>
#include <cassert>

int count_distinct_characters(const std::string& str) {
    std::string sorted_str = str;
    std::transform(sorted_str.begin(), sorted_str.end(), sorted_str.begin(), ::tolower);
    std::sort(sorted_str.begin(), sorted_str.end());
    sorted_str.erase(std::unique(sorted_str.begin(), sorted_str.end()), sorted_str.end());
    return sorted_str.size();
}