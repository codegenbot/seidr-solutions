#include <vector>
#include <algorithm>

bool issame(const std::vector<int> &a, const std::vector<int> &b) {
    return a == b;
}

std::vector<int> sort_third(std::vector<int> l) {
    for (int i = 2; i < l.size(); i += 3) {
        std::sort(l.begin() + i - 2, l.begin() + i + 1);
    }
    return l;
}