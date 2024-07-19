#include <algorithm>
#include <string>
#include <cassert>

int count_distinct_characters(const std::string& str) {
    std::string temp_str = str;
    transform(temp_str.begin(), temp_str.end(), temp_str.begin(), ::tolower);
    sort(temp_str.begin(), temp_str.end());
    auto it = unique(temp_str.begin(), temp_str.end());
    return distance(temp_str.begin(), it);
}