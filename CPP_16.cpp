#include <iostream>
#include <algorithm>

int count_distinct_characters(std::string str) {
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    sort(str.begin(), str.end());
    return std::distance(str.begin(), std::unique(str.begin(), str.end()));
}

int main() {
    assert(count_distinct_characters("Jerry jERRY JeRRRY") == 5);
    // Add more test cases if needed
    return 0;
}