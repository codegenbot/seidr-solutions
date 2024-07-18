#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

std::vector<int> unique_digits(std::vector<int> nums) {
    // Implement unique_digits function
    std::sort(nums.begin(), nums.end());
    nums.erase(std::unique(nums.begin(), nums.end()), nums.end());
    return nums;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    // Implement issame function
    return a == b;
}

int main() {
    assert(issame(unique_digits({135, 103, 31}), {31, 135}));
    return 0;
}