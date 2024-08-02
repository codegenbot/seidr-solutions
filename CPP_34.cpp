#include <algorithm>
#include <vector>

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> unique(vector<int> l) {
    sort(l.begin(), l.end());
    auto end = unique(l.begin(), l.end());
    l.erase(end, l.end());
    return l;
}