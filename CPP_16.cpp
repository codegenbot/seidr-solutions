#include <iostream>
#include <algorithm>
#include <string>
#include <cassert>

using namespace std;

int count_distinct_characters(const string& str) {
    string s = str;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    sort(s.begin(), s.end());
    auto last = unique(s.begin(), s.end());
    return distance(s.begin(), last);
}

int main() {
    assert(count_distinct_characters("Jerry jERRY JeRRRY") == 5);

    return 0;
}