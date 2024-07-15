#include <algorithm>
#include <string>
#include <cassert>

int count_distinct_characters(std::string str) {
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    sort(str.begin(), str.end());
    return std::unique(str.begin(), str.end()) - str.begin();
}

int main() {
    assert(count_distinct_characters("Jerry jERRY JeRRRY") == 5);
}