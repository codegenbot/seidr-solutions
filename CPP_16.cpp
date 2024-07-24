#include <algorithm>
#include <string>
#include <cassert>

int count_distinct_characters(const std::string& str) {
    std::string temp = str;
    transform(temp.begin(), temp.end(), temp.begin(), ::tolower);
    sort(temp.begin(), temp.end());
    auto last = unique(temp.begin(), temp.end());
    return distance(temp.begin(), last);
}