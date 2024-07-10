#include <algorithm>
#include <cassert>

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> solve() {
    vector<int> l = {5, 3, 5, 2, 3, 3, 9, 0, 123};
    sort(l.begin(), l.end());
    l.erase(unique(l.begin(), l.end(), issame), l.end());
    return l;
}