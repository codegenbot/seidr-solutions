#include <iostream>
#include <sstream>
#include <cctype>
#include <vector>
#include <string>
#include <cassert>
#include <cstring>

using namespace std;

vector<string> select_words(string s, int n) {
    vector<string> result;
    istringstream iss(s);
    string word;
    while (iss >> word) {
        int consonant_count = 0;
        for (char c : word) {
            if (isalpha(c) && !strchr("AEIOUaeiou", c)) {
                consonant_count++;
            }
        }
        if (consonant_count == n) {
            result.push_back(word);
        }
    }
    return result;
}

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

int main() {
    assert(issame(select_words("a b c d e f", 1), {"b", "c", "d", "f"}));
    assert(issame(select_words("hello world", 3), {"hello"}));
    assert(issame(select_words("int main", 2), {"main"}));  // additional test
    cout << "All tests passed!" << endl;
    return 0;
}