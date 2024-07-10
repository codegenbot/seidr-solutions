#include <algorithm>
#include <string>
#include <cassert>

int count_distinct_characters(const std::string& str) {
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    sort(str.begin(), str.end());
    str.erase(unique(str.begin(), str.end()), str.end());
    return str.size();
}

int main() {
    std::string test_input = "aAbBcCdD";
    int expected_result = 4;
    assert(count_distinct_characters(test_input) == expected_result);
}