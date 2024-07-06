```
#include <algorithm>
#include <vector>
#include <utility>

bool issame(int a, int b) {
    return a == b;
}

std::vector<int> order_by_points(std::vector<int> nums) {
    std::vector<std::pair<int, int>> pairs;
    for (int i = 0; i < nums.size(); i++) {
        pairs.emplace_back(std::abs(nums[i]), i);
    }
    std::sort(pairs.begin(), pairs.end());
    std::vector<int> result;
    for (const auto& pair : pairs) {
        result.push_back(pair.second * (pair.first > 0 ? -1 : 1));
    }
    return result;
}