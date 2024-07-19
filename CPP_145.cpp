#include <algorithm>

vector<int> order_by_points(vector<int> nums) {
    vector<pair<int, int>> pairs;
    for (int i = 0; i < nums.size(); ++i) {
        int num = nums[i];
        int digitSum = 0;
        bool isNegative = false;
        if (num < 0) {
            isNegative = true;
            num = -num;
        }
        while (num > 0) {
            digitSum += num % 10;
            num /= 10;
        }
        pairs.emplace_back(digitSum, i);
    }
    sort(pairs.begin(), pairs.end());
    vector<int> result;
    for (const auto& pair : pairs) {
        if (isNegative) {
            result.push_back(-nums[pair.second]);
        } else {
            result.push_back(nums[pair.second]);
        }
    }
    return result;
}