#include <vector>
#include <algorithm>
#include <cassert>

bool std::issame(const std::vector<int>& a, const std::vector<int>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

std::vector<int> make_a_pile(int n) {
    std::vector<int> stones;
    for (int i = 0; i < n; ++i) {
        stones.push_back(n + 2 * i);
    }
    return stones;
}