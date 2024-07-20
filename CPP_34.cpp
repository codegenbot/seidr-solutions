#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> solve(std::vector<int> l) {
    sort(l.begin(), l.end());
    l.erase(unique(l.begin(), l.end(), issame), l.end());
    return l;
}