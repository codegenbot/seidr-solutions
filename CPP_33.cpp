#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> sort_third(std::vector<int> l) {
    std::vector<int> l_copy = l;
    for (int i = 0; i < l.size(); i += 3) {
        std::sort(l_copy.begin() + i, l_copy.begin() + std::min(i + 3, static_cast<int>(l.size())));
    }
    return l_copy;
}

int main() {
    assert(issame(sort_third({5, 6, 3, 4, 8, 9, 2, 1}), std::vector<int>{2, 6, 3, 4, 8, 9, 5, 1}));
    return 0;
}