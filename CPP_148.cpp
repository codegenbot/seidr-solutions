#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool issame(const vector<string>& a, const vector<string>& b) {
    return a == b;
}

vector<string> bf(const string& s1, const string& s2) {
    vector<string> common_chars;
    for (char c : s1) {
        if (s2.find(c) != string::npos && find(common_chars.begin(), common_chars.end(), string(1, c)) == common_chars.end()) {
            common_chars.push_back(string(1, c));
        }
    }
    return common_chars;
}

int main() {
    assert(issame(bf("Jupiter", "Makemake"), {"e", "u"}));

    return 0;
}