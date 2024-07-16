#include <algorithm>
#include <vector>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    std::vector<int> l = a;
    sort(l.begin(), l.end());
    l.erase(std::unique(l.begin(), l.end()), l.end());
    return l == b;
}