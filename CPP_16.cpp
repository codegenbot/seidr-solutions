#include <algorithm>
#include <cassert>

int count_distinct_characters(std::string str) {
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    sort(str.begin(), str.end());
    auto it = std::unique(str.begin(), str.end());
    return std::distance(str.begin(), it);
}

int main() {
    assert(count_distinct_characters("Jerry jERRY JeRRRY") == 5);
    return 0;
}