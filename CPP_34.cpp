#include <algorithm>

bool issame(vector<int> a, vector<int> b) {
    return a.size() == b.size() && equal(a.begin(), a.end(), b.begin());
}

sort(l.begin(), l.end());
l.erase(unique(l.begin(), l.end()), l.end());
assert(vector<int>(expected) == l, issame(expected, l));
return l;