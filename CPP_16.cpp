#include <algorithm>
#include <iostream>
#include <string>

int count_distinct_characters(const std::string& str) {
    std::string copy = str;
    std::transform(copy.begin(), copy.end(), copy.begin(), ::tolower);
    std::sort(copy.begin(), copy.end());
    auto it = std::unique(copy.begin(), copy.end());
    return std::distance(copy.begin(), it);
}

int main() {
    assert(count_distinct_characters("Jerry jERRY JeRRRY") == 5);
    return 0;
}