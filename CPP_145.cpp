#include <algorithm>

vector<int> order_by_points(vector<int> nums) {
    vector<pair<int, int>> numSumIndex;
    for (int i = 0; i < nums.size(); i++) {
        int sumOfDigits = 0;
        int n = nums[i];
        while (n > 0) {
            sumOfDigits += n % 10;
            n /= 10;
        }
        numSumIndex.push_back({sumOfDigits, i});
    }

    sort(numSumIndex.begin(), numSumIndex.end());

    vector<int> result;
    for (int i = 0; i < numSumIndex.size(); i++) {
        result.push_back(nums[numSumIndex[i].second]);
    }
    return result;
}