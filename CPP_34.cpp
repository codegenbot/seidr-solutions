#include <vector>
#include <algorithm>

bool issame(const vector<int>& a, const vector<int>& b)
{
    return a == b;
}

sort(l.begin(), l.end());
l.erase(std::unique(l.begin(), l.end(), issame), l.end());
return l;