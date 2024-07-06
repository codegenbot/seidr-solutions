#include <algorithm>
#include <vector>
#include <utility>

std::vector<int> order_by_points(std::vector<int> nums) {
    std::vector<pair<int, int>> pairs;
    for (int i = 0; i < nums.size(); i++) {
        pairs.emplace_back(abs(nums[i]), i);
    }
    sort(pairs.begin(), pairs.end());
    std::vector<int> result;
    for (const auto& pair : pairs) {
        result.push_back(pair.first > 0 ? pair.second >= 0 ? 1 : -1 : nums[pair.second]);
    }
    return result;
}