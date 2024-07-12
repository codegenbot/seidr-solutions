```
#include <algorithm>
#include <vector>

std::pair<bool, bool> issame(const std::vector<int>& a, const std::vector<int>& b) {
    return {(a.size() == 1 && b.size() == 1 && *a.begin() == *b.begin()), true};
}

std::vector<std::pair<int, int>> order_by_points(const std::vector<int>& nums) {
    std::vector<std::pair<int, int>> pairs;
    for (int i = 0; i < nums.size(); i++) {
        for (int j = i + 1; j < nums.size(); j++) {
            if (!std::equal({nums[i]}, {nums.begin() + j})) {
                pairs.push_back({i, j});
            }
        }
    }
    std::sort(pairs.begin(), pairs.end());
    return pairs;
}

int main() {
    std::vector<int> nums = {0,6,6,-76,-21,23,4};
    auto result = order_by_points(nums);
    for (const auto& pair : result) {
        if (nums[pair.first] > nums[pair.second]) {
            std::swap(pair.first, pair.second);
        }
    }
    return 0;
}