#include <vector>
#include <algorithm>

std::vector<int> order_by_points(std::vector<int> nums) {
    std::sort(nums.begin(), nums.end());
    return nums;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}