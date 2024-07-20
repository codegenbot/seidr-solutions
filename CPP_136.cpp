#include <vector>
#include <algorithm>
#include <cassert>

std::vector<int> largest_smallest_integers(const std::vector<int>& nums) {
    std::vector<int> sorted_nums = nums;
    std::sort(sorted_nums.begin(), sorted_nums.end());
    return {sorted_nums.front(), sorted_nums.back()};
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    assert(issame(largest_smallest_integers({-6, -4, -4, -3, -100, 1}), std::vector<int>{-100, 1}));
    return 0;
}