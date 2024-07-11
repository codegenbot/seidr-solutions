#include <algorithm>

vector<int> order_by_points(vector<int> nums) {
    vector<pair<int, int>> pairs;
    for (int i = 0; i < nums.size(); i++) {
        int sum = 0;
        int num = abs(nums[i]);
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        pairs.push_back({sum, i});
    }
    sort(pairs.begin(), pairs.end());
    vector<int> result;
    for (auto& pair : pairs) {
        if (pair.second >= 0 && pair.second < result.size()) {
            result.insert(result.begin() + pair.second, nums[pair.second]);
        } else {
            result.push_back(nums[pair.second]);
        }
    }
    return result;
}