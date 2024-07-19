#include <algorithm>
#include <iostream>
#include <string>
#include <cassert>

int count_distinct_characters(const std::string& str) {
    std::string sortedStr = str;
    std::transform(sortedStr.begin(), sortedStr.end(), sortedStr.begin(), ::tolower);
    std::sort(sortedStr.begin(), sortedStr.end());
    sortedStr.erase(std::unique(sortedStr.begin(), sortedStr.end()), sortedStr.end());
    return sortedStr.size();
}

int main() {
    assert(count_distinct_characters("Jerry jERRY JeRRRY") == 5);
    // Add more test cases here if needed
    return 0;
}