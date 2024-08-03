#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int maximum(const std::vector<int>& nums, int default_val) {
    if (nums.empty()) return default_val;
    return *std::max_element(nums.begin(), nums.end());
}

int main() {
    assert(issame(std::vector<int>{1, 2, 3, -23, 243, -400, 0}, std::vector<int>{1, 2, 3, -23, 243, -400, 0}));
    assert(maximum(std::vector<int>{1, 2, 3, -23, 243, -400, 0}, 0) == 243);

    assert(issame(std::vector<int>{1, 2, 3, -23, 243, -400, 0}, std::vector<int>{1, 2, 3, -23, 243, -400, 0}));

    return 0;
}