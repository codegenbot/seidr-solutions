#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> sort_third(std::vector<int> l) {
    std::vector<int> l_copy = l;
    for (int i = 0; i < l.size(); i++) {
        if (i % 3 == 0 && i + 3 <= l.size()) {
            std::sort(l_copy.begin() + i, l_copy.begin() + i + 3);
        }
    }
    return l_copy;
}