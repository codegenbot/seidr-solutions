#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> sort_third(std::vector<int> l) {
    std::vector<int> res = l;
    for (size_t i = 0; i < l.size(); i += 3) {
        std::sort(res.begin() + i, res.begin() + std::min(i + 3, l.size()));
    }
    return res;
}