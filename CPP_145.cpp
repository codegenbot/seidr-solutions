#include <algorithm>

vector<int> order_by_points(vector<int> nums) {
    vector<pair<int, int>> pairs;
    for (int i = 0; i < nums.size(); i++) {
        int digitSum = 0;
        int n = abs(nums[i]);
        while (n > 0) {
            digitSum += n % 10;
            n /= 10;
        }
        pairs.push_back({digitSum, i});
    }

    sort(pairs.begin(), pairs.end());

    vector<int> result;
    for (const auto& pair : pairs) {
        result.push_back(nums[pair.second]);
    }

    return result;
}