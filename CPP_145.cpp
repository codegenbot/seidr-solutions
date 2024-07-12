#include <algorithm>
#include <vector>

bool issame(const std::vector<int>& a) {
    return a.size() == 1;
}

std::vector<std::pair<int, int>> order_by_points(const std::vector<int>& nums) {
    std::vector<std::pair<int, int>> pairs;
    for (int i = 0; i < nums.size(); i++) {
        for (int j = i + 1; j < nums.size(); j++) {
            if (nums[i] != nums[j]) {
                pairs.push_back({i, j});
            }
        }
    }
    return pairs;
}