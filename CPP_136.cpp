#include <vector>
#include <algorithm>
#include <cassert>

std::vector<int> largest_smallest_integers(std::vector<int> nums) {
    std::sort(nums.begin(), nums.end());
    return {nums.front(), nums.back()};
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}