#include <algorithm>
#include <string>

int count_distinct_characters(const std::string& str) {
    std::string str_copy = str;
    std::transform(str_copy.begin(), str_copy.end(), str_copy.begin(), ::tolower);
    std::sort(str_copy.begin(), str_copy.end());
    auto it = std::unique(str_copy.begin(), str_copy.end());
    return std::distance(str_copy.begin(), it);
}