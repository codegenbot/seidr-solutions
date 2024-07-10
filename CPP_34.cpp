#include <algorithm>
#include <vector>
#include <cassert>

bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

sort(l.begin(), l.end());
l.erase(unique(l.begin(), l.end(), issame), l.end());
return l;