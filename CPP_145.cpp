#include <vector>
#include <algorithm>

vector<int> order_by_points(vector<int> nums) {
    vector<pair<int, int>> pairs;
    for (int i = 0; i < nums.size(); ++i) {
        int sum_of_digits = 0;
        int num = nums[i];
        while (num > 0) {
            sum_of_digits += num % 10;
            num /= 10;
        }
        pairs.emplace_back(sum_of_digits, i);
    }

    sort(pairs.begin(), pairs.end());

    vector<int> result;
    for (const auto& pair : pairs) {
        result.push_back(nums[pair.second]);
    }

    return result;
}