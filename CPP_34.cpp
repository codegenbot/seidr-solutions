#include <algorithm>
#include <vector>

std::vector<int> solve(std::vector<int>& l) {
    std::sort(l.begin(), l.end());
    l.erase(std::unique(l.begin(), l.end()), l.end());
    return l;
}