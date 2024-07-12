#include <algorithm>
#include <vector>

bool issame(int a, int b) {
    return a == b;
}

std::vector<std::pair<int, int>> order_by_points(const std::vector<int>& nums) {
    std::vector<std::pair<int, int>> result;
    for (int i = 0; i < nums.size(); i++) {
        if (i >= 1 && nums[i] != nums[i-1]) {
            result.push_back({i, i});
        }
    }
    return result;
}