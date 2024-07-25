#include <algorithm>
#include <vector>

bool issame(std::vector<int>& a, std::vector<int>& b) {
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    return a == b;
}

std::vector<int> fixCode(std::vector<int>& l) {
    std::sort(l.begin(), l.end());
    l.erase(std::unique(l.begin(), l.end()), l.end());
    return l;
}