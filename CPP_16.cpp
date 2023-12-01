#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

int count_distinct_characters(string str) {
    vector<char> distinctChars;
    for (int i = 0; i < str.length(); i++) {
        char ch = tolower(str[i]);
        if (find(distinctChars.begin(), distinctChars.end(), ch) == distinctChars.end()) {
            distinctChars.push_back(ch);
        }
    }
    return distinctChars.size();
}

int main() {
    assert(count_distinct_characters("Jerry jERRY JeRRRY") == 5);
    return 0;
}