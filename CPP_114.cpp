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
    std::vector<long long> nums = {1,-2,3,4,-5};
    long long result = minSubArraySum(nums);
    std::cout << "Minimum subarray sum is: " << result << std::endl;
    return 0;
}