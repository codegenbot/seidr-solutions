#include <algorithm>
bool issame(vector<int> a, vector<int> b) {
    vector<int> l = a;
    sort(l.begin(), l.end());
    l = vector<int>(l.begin(), unique(l.begin(), l.end()));
    return l;
}