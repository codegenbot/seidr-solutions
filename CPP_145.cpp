#include <algorithm>

vector<int> order_by_points(vector<int> nums) {
    vector<pair<int, int>> pairs;
    for (int num : nums) {
        int sum = 0;
        int originalIndex = 0;
        while (num != 0) {
            sum += abs(num % 10);
            num /= 10;
            originalIndex++;
        }
        pairs.push_back({sum, originalIndex});
    }

    sort(pairs.begin(), pairs.end());

    vector<int> result;
    for (const auto& pair : pairs) {
        result.push_back(nums[pair.second - 1]);
    }

    return result;
}