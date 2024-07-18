#include <algorithm>

bool issame(vector<int> a, vector<int> b) {}

vector<int> solve(vector<int>& l) {
    vector<int> uniqueVec = l;
    sort(uniqueVec.begin(), uniqueVec.end());
    uniqueVec.erase(unique(uniqueVec.begin(), uniqueVec.end()), uniqueVec.end());
    assert(issame(uniqueVec, {0, 2, 3, 5, 9, 123}));
    return uniqueVec;
}