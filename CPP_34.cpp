#include <algorithm>
#include <vector>

std::vector<int> solve(std::vector<int>& l) {
    sort(l.begin(), l.end());
    l.erase(unique(l.begin(), l.end()), l.end());
    return l;
}