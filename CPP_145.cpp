#include <algorithm>

vector<int> order_by_points(vector<int> nums) {
    vector<pair<int, int>> numDigits;
    for (int i = 0; i < nums.size(); ++i) {
        int sum = 0;
        int n = abs(nums[i]);
        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }
        numDigits.emplace_back(sum, nums[i]);
    }
    sort(numDigits.begin(), numDigits.end());
    vector<int> result;
    for (const auto& p : numDigits) {
        result.push_back(p.second);
    }
    return result;
}