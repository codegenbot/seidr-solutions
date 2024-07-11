#include <iostream>
#include <algorithm>
#include <cassert>
#include <string>

int count_distinct_characters(const std::string& str) {
    std::string str_copy = str; // Create a local copy
    for (char& c : str_copy) {
        c = std::tolower(c);
    }
    std::sort(str_copy.begin(), str_copy.end());
    auto last = std::unique(str_copy.begin(), str_copy.end());
    return std::distance(str_copy.begin(), last);
}

int main() {
    assert(count_distinct_characters("Jerry jERRY JeRRRY") == 5);
    return 0;
}