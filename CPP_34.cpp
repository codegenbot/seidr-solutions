#include <algorithm>
bool issame(vector<int> a, vector<int> b) {
    vector<int> l = a;
    sort(l.begin(), l.end());
    l = vector<int>(l.begin(), l.erase(unique(l.begin(), l.end()), l.end()));
    return l;
}