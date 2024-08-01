#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    return std::vector<int>(a.begin(), a.end()) == std::vector<int>(b.begin(), b.end());
}

std::vector<int> sort_third(std::vector<int> l) {
    std::vector<int> l_copy = l;
    for (int i = 0; i < l.size(); ++i) {
        if ((i + 1) % 3 == 0) {
            std::sort(l_copy.begin() + i - 2, l_copy.begin() + i + 1);
        }
    }
    return l_copy;
}