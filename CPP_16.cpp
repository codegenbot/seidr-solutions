#include <algorithm>
#include <iostream>
#include <cassert>

int count_distinct_characters(const std::string& str) {
    std::string tmp_str = str;
    std::transform(tmp_str.begin(), tmp_str.end(), tmp_str.begin(), ::tolower);
    std::sort(tmp_str.begin(), tmp_str.end());
    auto it = std::unique(tmp_str.begin(), tmp_str.end());
    return std::distance(tmp_str.begin(), it);
}

int main() {
    assert(count_distinct_characters("Jerry jERRY JeRRRY") == 5);

    return 0;
}