#include <algorithm>
#include <iostream>
#include <cassert>

int count_distinct_characters(std::string str) {
    std::transform(str.begin(), str.end(), str.begin(), ::tolower);
    std::sort(str.begin(), str.end());
    str.erase(std::unique(str.begin(), str.end()), str.end());
    return str.size();
}

int main() {
    assert(count_distinct_characters("Jerry jERRY JeRRRY") == 5);
    // Add more test cases as needed

    return 0;
}