#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int count_distinct_characters(const string& str) {
    vector<char> distinctCharacters;
    for (int i = 0; i < str.length(); i++) {
        char ch = tolower(str[i]);
        if (find(distinctCharacters.begin(), distinctCharacters.end(), ch) == distinctCharacters.end()) {
            distinctCharacters.push_back(ch);
        }
    }
    return distinctCharacters.size();
}

int main() {
    assert(count_distinct_characters("Jerry jERRY JeRRRY") == 5);
    // Add more test cases here
    return 0;
}