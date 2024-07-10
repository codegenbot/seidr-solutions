#include <algorithm>
#include <cassert>

bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

vector<vector<int>> solve(vector<vector<int>>& l) {
    sort(l.begin(), l.end(), issame);
    l.erase(unique(l.begin(), l.end(), issame), l.end());
    return l;
}