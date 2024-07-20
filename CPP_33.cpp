#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> sort_third(std::vector<int> l) {
    std::vector<int> l_copy = l;
    for (int i = 0; i < l.size(); i += 3) {
        std::sort(l_copy.begin() + i, l_copy.begin() + i + 3);
    }
    return l_copy;
}