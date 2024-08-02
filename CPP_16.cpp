#include <iostream>
#include <algorithm>
#include <string>

int count_distinct_characters(const std::string& str) {
    std::string temp = str;
    std::transform(temp.begin(), temp.end(), temp.begin(), ::tolower);
    std::sort(temp.begin(), temp.end());
    temp.erase(std::unique(temp.begin(), temp.end()), temp.end());
    return temp.size();
}

int main() {
    assert(count_distinct_characters("Jerry jERRY JeRRRY") == 5);
    
    return 0;
}