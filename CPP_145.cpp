#include <algorithm>

vector<int> order_by_points(vector<int> nums) {
    vector<pair<int, int>> numPoints;
    for (int i = 0; i < nums.size(); i++) {
        int sumOfDigits = 0;
        int n = nums[i];
        while (n > 0) {
            sumOfDigits += n % 10;
            n /= 10;
        }
        numPoints.push_back({sumOfDigits, i});
    }

    sort(numPoints.begin(), numPoints.end());

    vector<int> result;
    for (auto& point : numPoints) {
        result.push_back(nums[point.second]);
    }

    return result;
}