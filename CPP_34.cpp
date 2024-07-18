#include <algorithm>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

sort(l.begin(), l.end());
l.erase(std::unique(l.begin(), l.end()), l.end());
assert(std::vector<int>(l.begin(), l.end()) == std::vector<int>({0, 1, 2, 3, 4}));

return l;