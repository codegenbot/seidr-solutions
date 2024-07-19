#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

vector<int> sort_third(vector<int> l) {
    sort(l.begin(), l.end(), [](int a, int b) { return a % 3 == 0 && b % 3 == 0 ? a < b : false; });
    return l;
}

int main() {
    assert(issame(sort_third({5, 6, 3, 4, 8, 9, 2, 1}), {2, 6, 3, 4, 8, 9, 5, 1}));
    return 0;
}