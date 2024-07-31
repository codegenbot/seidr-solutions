#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

using namespace std;

vector<string> bf(const string& s1, const string& s2) {
    vector<string> res;
    for (char c : s1) {
        if (find(s2.begin(), s2.end(), c) == s2.end()) {
            res.push_back(string(1, c));
        }
    }
    for (char c : s2) {
        if (find(s1.begin(), s1.end(), c) == s1.end()) {
            res.push_back(string(1, c));
        }
    }
    return res;
}

bool issame(const vector<string>& a, const vector<string>& b) {
    return a == b;
}

int main() {
    assert(issame(bf("Jupiter", "Makemake"), vector<string>()));
    return 0;
}