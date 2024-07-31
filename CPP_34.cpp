#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());
    return a == b;
}

std::vector<int> unique(std::vector<int>& l) {
    return std::vector<int>(std::unique(l.begin(), l.end()), l.end());
}

std::vector<int> l = {5, 3, 5, 2, 3, 3, 9, 0, 123};
std::sort(l.begin(), l.end());
l = unique(l);
assert(issame(l, std::vector<int>{0, 2, 3, 5, 9, 123}));

return 0;