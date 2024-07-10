#include <vector>
#include <algorithm>

std::vector<int> order_by_points(std::vector<int> nums) {
    std::vector<std::pair<int, int>> pairs;
    for (int i = 0; i < nums.size(); i++) {
        int sumOfDigits = 0;
        int num = nums[i];
        while (num > 0) {
            sumOfDigits += num % 10;
            num /= 10;
        }
        pairs.emplace_back(sumOfDigits, i);
    }

    std::sort(pairs.begin(), pairs.end());

    std::vector<int> result;
    for (int i = 0; i < pairs.size(); i++) {
        result.push_back(nums[pairs[i].second]);
    }

    return result;
}