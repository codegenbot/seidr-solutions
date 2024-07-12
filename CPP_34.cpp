#include <algorithm>
#include <vector>

bool issame(int a, int b) {
    return a == b;
}

std::vector<int> solve(std::vector<int> l) {
    std::sort(l.begin(), l.end());
    l.erase(std::unique(l.begin(), l.end(), issame), l.end());
    return l;
}