#include <algorithm>

vector<int> order_by_points(vector<int> nums) {
    vector<pair<int, int>> pairs;
    for (int i = 0; i < nums.size(); ++i) {
        int num = nums[i];
        int digit_sum = 0;
        while (num) {
            digit_sum += num % 10;
            num /= 10;
        }
        pairs.emplace_back(digit_sum, i);
    }
    sort(pairs.begin(), pairs.end());
    vector<int> result;
    for (const auto& pair : pairs) {
        result.push_back(nums[pair.second]);
    }
    return result;
}