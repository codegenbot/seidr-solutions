#include <iostream>
#include <algorithm>

int count_distinct_characters(const std::string& str) {
    std::string temp = str;
    std::transform(temp.begin(), temp.end(), temp.begin(), ::tolower);
    std::sort(temp.begin(), temp.end());
    return std::distance(temp.begin(), std::unique(temp.begin(), temp.end()));
}

int main() {
    assert(count_distinct_characters("Jerry jERRY JeRRRY") == 5);
    
    return 0;
}