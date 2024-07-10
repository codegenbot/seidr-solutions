#include <algorithm>
#include <vector>

bool issame(const std::vector<int>& l1, const std::vector<int>& l2);

std::vector<int> fixCode(std::vector<int> l) {
    sort(l.begin(), l.end());
    l.erase(unique(l.begin(), l.end(), issame), l.end());
    return l;
}

bool issame(const std::vector<int>& l1, const std::vector<int>& l2) {
    return l1 == l2;
}