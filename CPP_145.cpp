#include <algorithm>
#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> order_by_points(const std::vector<int>& nums) {
    std::vector<std::pair<int, int>> pairs;
    for (int i = 0; i < nums.size(); i++) {
        for (int j = i + 1; j <= nums.size(); j++) {
            if (!issame({nums[i]}, {nums[j]})) {
                pairs.push_back({i, j});
            }
        }
    }
    return {};
}