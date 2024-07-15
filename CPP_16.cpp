#include <algorithm>
#include <string>

int count_distinct_characters(const std::string& str) {
    std::transform(str.begin(), str.end(), str.begin(), ::tolower);
    std::sort(str.begin(), str.end());
    auto last = std::unique(str.begin(), str.end());
    return std::distance(str.begin(), last);
}