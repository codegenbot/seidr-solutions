#include <algorithm>
#include <vector>
#include <utility>

std::vector<int> order_by_points(std::vector<int> nums) {
    std::vector<std::pair<int, int>> pairs;
    for (int i = 0; i < nums.size(); i++) {
        pairs.emplace_back(abs(nums[i]), i);
    }
    std::sort(pairs.begin(), pairs.end());
    std::vector<int> result;
    for (const auto& pair : pairs) {
        if (pair.first > 0) {
            result.push_back(pair.second >= 0 ? 1 : -1);
        } else {
            result.push_back(nums[pair.second]);
        }
    }
    return result;
}