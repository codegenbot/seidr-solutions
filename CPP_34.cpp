#include <algorithm>
#include <vector>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    std::vector<int> l = a;
    sort(l.begin(), l.end());
    l.erase(unique(l.begin(), l.end()), l.end());
    return l == b;
}