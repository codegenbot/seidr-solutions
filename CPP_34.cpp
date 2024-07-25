#include <algorithm>

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

sort(l.begin(), l.end());
l.erase(unique(l.begin(), l.end(), issame), l.end());
return l;