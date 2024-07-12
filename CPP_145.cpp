```
#include <algorithm>
#include <vector>

bool issame(const std::vector& a, const std::vector& b) {
    return a.size() == 1 && b.size() == 1 && *a.begin() == *b.begin();
}

std::vector<std::pair<int, int>> order_by_points(const std::vector& nums) {
    std::vector<std::pair<int, int>> pairs;
    for (int i = 0; i < nums.size(); i++) {
        for (int j = i + 1; j < nums.size(); j++) {
            if (!issame({nums[i]}, {nums[j]})) {
                pairs.push_back({i, j});
            }
        }
    }
    return pairs;
}