#include <iostream>
#include <set>
#include <vector>
#include <cassert>
#include <algorithm>

using namespace std;

bool issame(const set<int>& a, const set<int>& b) {
    return a == b;
}

bool issame(const vector<int>& a, const vector<int>& b) {
    return set<int>(a.begin(), a.end()) == set<int>(b.begin(), b.end());
}

int main() {
    assert(issame(set<int>({5, 3, 5, 2, 3, 3, 9, 0, 123}), set<int>({0, 2, 3, 5, 9, 123})));
    assert(issame(vector<int>({5, 3, 5, 2, 3, 3, 9, 0, 123}), vector<int>({0, 2, 3, 5, 9, 123}));

    return 0;
}