#include <algorithm>
#include <string>

int count_distinct_characters(const std::string& str) {
    std::string s = str;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    sort(s.begin(), s.end());
    auto last = unique(s.begin(), s.end());
    return distance(s.begin(), last);
}