#include <algorithm>

vector<int> order_by_points(vector<int> nums) {
    vector<pair<int, int>> numAndIndex;
    for (int i = 0; i < nums.size(); i++) {
        numAndIndex.push_back({getDigitSum(nums[i]), i});
    }
    sort(numAndIndex.begin(), numAndIndex.end());
    vector<int> result;
    for (const auto& pair : numAndIndex) {
        result.push_back(nums[pair.second]);
    }
    return result;
}

int getDigitSum(int n) {
    int sum = 0;
    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}