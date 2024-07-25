#include <vector>

int minSubArraySum(vector<long long> nums) {
    long long sum = 0, min_sum = INT_MAX;
    for (int i = 0; i < nums.size(); ++i) {
        sum += nums[i];
        if (sum > min_sum) {
            break;
        }
        if (i == nums.size() - 1 || nums[i] < nums[i + 1]) {
            min_sum = min(min_sum, sum);
        }
    }
    return min_sum;
}