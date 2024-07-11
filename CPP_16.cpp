#include <iostream>
#include <algorithm>
#include <string>

int count_distinct_characters(const std::string& str) {
    std::transform(str.begin(), str.end(), str.begin(), ::tolower);
    std::sort(str.begin(), str.end());
    auto last = std::unique(str.begin(), str.end());
    return std::distance(str.begin(), last);
}

int main() {
    assert (count_distinct_characters("Jerry jERRY JeRRRY") == 5);
    // Add more test cases as needed
    return 0;
}