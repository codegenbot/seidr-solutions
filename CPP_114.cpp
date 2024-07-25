#include <vector>
long long minSubArraySum(const std::vector<long long>& nums) {
    long long sum = 0, min_sum = LLONG_MAX;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        if (sum > 0) {
            min_sum = min(min_sum, sum);
        } else {
            sum = 0;
        }
    }
    return min_sum;
}

int main() {
    std::vector<long long> nums = {1,-2,3,10,-4,7,6};
    long long result = minSubArraySum(nums);
    std::cout << "The minimum sum of all non-empty subarrays is: " << result << std::endl;
    return 0;
}