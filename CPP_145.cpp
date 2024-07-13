#include <algorithm>

vector<int> order_by_points(vector<int> nums) {
    vector<pair<int, int>> numAndIndex;
    for (int i = 0; i < nums.size(); i++) {
        int sumOfDigits = 0;
        int num = abs(nums[i]);
        while (num > 0) {
            sumOfDigits += num % 10;
            num /= 10;
        }
        numAndIndex.emplace_back(sumOfDigits, i);
    }

    sort(numAndIndex.begin(), numAndIndex.end());

    vector<int> result;
    for (const auto& pair : numAndIndex) {
        result.push_back(nums[pair.second]);
    }

    return result;
}