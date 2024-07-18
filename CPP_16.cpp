#include <algorithm>
#include <iostream>
#include <string>
#include <cassert>

int count_distinct_characters(const std::string& str) {
    std::string str_copy = str;
    
    std::transform(str_copy.begin(), str_copy.end(), str_copy.begin(), ::tolower);
    std::sort(str_copy.begin(), str_copy.end());
    str_copy.erase(std::unique(str_copy.begin(), str_copy.end()), str_copy.end());
    
    return str_copy.size();
}

int main() {
    assert(count_distinct_characters("Jerry jERRY JeRRRY") == 5);

    return 0;
}