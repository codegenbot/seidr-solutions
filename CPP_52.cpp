#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool below_threshold(const std::vector<int>& nums, int threshold) {
    return std::any_of(nums.begin(), nums.end(), [threshold](int num) { return num < threshold; });
}