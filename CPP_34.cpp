#include <algorithm>
#include <vector>

bool issame(const std::vector<int>& v1, const std::vector<int>& v2) {
    if (v1.size() != v2.size()) {
        return false;
    }

    for (size_t i = 0; i < v1.size(); ++i) {
        if (v1[i] != v2[i]) {
            return false;
        }
    }

    return true;
}

std::vector<int> customSort(std::vector<int> l) {
    sort(l.begin(), l.end());
    l.erase(unique(l.begin(), l.end(), issame), l.end());
    return l;
}