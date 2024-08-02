#include <algorithm>

vector<int> order_by_points(vector<int> nums) {
    vector<pair<int, int>> pairs;
    for (int i = 0; i < nums.size(); i++) {
        int digitSum = 0;
        int num = abs(nums[i]);
        while (num > 0) {
            digitSum += num % 10;
            num /= 10;
        }
        pairs.emplace_back(digitSum, nums[i]);
    }
    sort(pairs.begin(), pairs.end());
    vector<int> result;
    for (const auto& pair : pairs) {
        result.push_back(pair.second);
    }
    return result;
}