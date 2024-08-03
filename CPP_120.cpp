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

void test_issame() {
    assert(issame(std::vector<int>{1, 2, 3, -23, 243, -400, 0}, std::vector<int>{1, 2, 3, -23, 243, -400, 0}));
    assert(!issame(std::vector<int>{1, 2, 3, -23, 243, -400, 0}, std::vector<int>{1, 2, 3, -23, 243, -400}));
}

void test_maximum() {
    assert(maximum(std::vector<int>{1, 2, 3, -23, 243, -400, 0}, 0) == 243);
    assert(maximum(std::vector<int>{}, -3) == -3);
}

int main() {
    test_issame();
    test_maximum();

    return 0;
}