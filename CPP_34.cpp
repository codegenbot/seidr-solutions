#include <algorithm>
#include <vector>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b){
    return a == b;
}

std::vector<int> l = {5, 3, 5, 2, 3, 3, 9, 0, 123};
std::sort(l.begin(), l.end());
l.erase(std::std::unique(l.begin(), l.end()), l.end());
assert(issame(l, std::vector<int>{0, 2, 3, 5, 9, 123}));