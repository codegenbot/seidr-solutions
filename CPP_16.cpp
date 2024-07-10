#include <algorithm>
#include <iostream>
#include <string>
#include <cassert>

int count_distinct_characters(const std::string& str) {
    std::string temp = str;
    transform(temp.begin(), temp.end(), temp.begin(), ::tolower);
    sort(temp.begin(), temp.end());
    temp.erase(unique(temp.begin(), temp.end()), temp.end());
    return temp.size();
}

int main() {
    assert (count_distinct_characters("Jerry jERRY JeRRRY") == 5);
    return 0;
}