#include <algorithm>

int count_distinct_characters(std::string str) {
    std::transform(str.begin(), str.end(), str.begin(), ::tolower);
    std::sort(str.begin(), str.end());
    return std::unique(str.begin(), str.end()) - str.begin();
}