#include <algorithm>

int order_by_points(vector<int> nums) {
    vector<pair<int, int>> pairs;
    for (int i = 0; i < nums.size(); i++) {
        int sumOfDigits = 0;
        int num = abs(nums[i]);
        while (num > 0) {
            sumOfDigits += num % 10;
            num /= 10;
        }
        pairs.push_back({sumOfDigits, i});
    }

    sort(pairs.begin(), pairs.end());

    vector<int> result;
    for (int i = 0; i < nums.size(); i++) {
        while (pairs[i].second > i) {
            pairs[i] = make_pair(pairs[i].first, pairs[i].second - 1);
        }
    }

    for (int i = 0; i < nums.size(); i++) {
        result.push_back(nums[pairs[i].second]);
    }

    return 0;
}