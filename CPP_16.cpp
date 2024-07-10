#include <algorithm>
#include <iostream>
#include <cassert>

int count_distinct_characters(const std::string& str) {
    std::string temp = str;
    transform(temp.begin(), temp.end(), temp.begin(), ::tolower);
    sort(temp.begin(), temp.end());
    return std::unique(temp.begin(), temp.end()) - temp.begin();
}

int main() {
    assert(count_distinct_characters("Jerry jERRY JeRRRY") == 5);
    // Add more test cases if needed
    return 0;
}