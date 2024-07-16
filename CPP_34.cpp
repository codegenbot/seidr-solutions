#include <algorithm>

bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

vector<int> removeDuplicates(vector<int>& l) {
    sort(l.begin(), l.end());
    auto unique = [](const int& x, const int& y) { return x == y; };
    l.erase(unique(l.begin(), l.end()), l.end());
    return l;
}