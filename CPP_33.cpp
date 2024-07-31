#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

std::vector<int> sort_third(std::vector<int> l) {
    for (int i = 0; i < l.size(); i += 3) {
        std::sort(l.begin() + i, l.begin() + std::min(i + 3, static_cast<int>(l.size())));
    }
    return l;
}

int main() {
    assert(sort_third({5, 6, 3, 4, 8, 9, 2, 1}) == std::vector<int>({2, 6, 3, 4, 8, 9, 5, 1}));
    return 0;
}