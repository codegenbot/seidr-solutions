#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> order_by_points(std::vector<int> nums) {
    if (nums.empty()) {
        return nums;
    }
    std::vector<std::pair<int, int>> sums;
    for (int i = 0; i < nums.size(); i++) {
        int sum = 0;
        int num = std::abs(nums[i]);
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        sums.push_back(std::make_pair(sum, i));
    }
    std::sort(sums.begin(), sums.end());
    std::vector<int> result;
    for (int i = 0; i < sums.size(); i++) {
        result.push_back(nums[sums[i].second]);
    }
    return result;
}