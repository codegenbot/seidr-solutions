#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    std::vector<int> a_sorted = a;
    std::vector<int> b_sorted = b;
    std::sort(a_sorted.begin(), a_sorted.end());
    std::sort(b_sorted.begin(), b_sorted.end());
    return a_sorted == b_sorted;
}

int main() {
    assert(issame(std::vector<int>{5, 3, 5, 2, 3, 3, 9, 0, 123}, std::vector<int>{0, 2, 3, 5, 9, 123}));
    return 0;
}