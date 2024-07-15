#include <vector>
#include <algorithm>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

sort(l.begin(), l.end());
l.erase(unique(l.begin(), l.end(), issame), l.end());
return l;