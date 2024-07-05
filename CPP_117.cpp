#include <vector>
#include <string>
#include <sstream>
#include <cctype>
#include <cstring>
#include <cassert>
#include <iostream>

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
    if (a.size() != b.size()) return false;
    for (size_t i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    assert(issame(select_words("a b c d e f", 1), {"b", "c", "d", "f"}));
    // You can add more test cases here

    cout << "All test cases passed" << endl;
    return 0;
}