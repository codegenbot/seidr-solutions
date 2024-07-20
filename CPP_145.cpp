#include <algorithm>

vector<int> order_by_points(vector<int> nums) {
    vector<pair<int, int>> numAndIndex;
    for (int i = 0; i < nums.size(); i++) {
        int sumOfDigits = 0;
        int n = nums[i];
        while (n != 0) {
            sumOfDigits += n % 10;
            n /= 10;
        }
        numAndIndex.push_back({sumOfDigits, i});
    }

    sort(numAndIndex.begin(), numAndIndex.end());

    vector<int> result;
    for (auto& pair : numAndIndex) {
        result.push_back(nums[pair.second]);
    }

    return result;
}