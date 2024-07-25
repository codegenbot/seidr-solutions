#include <vector>

long long minSubArraySum(const std::vector<long long>& nums) {
    long long min_sum = nums[0];
    long long curr_sum = 0;
    
    for (int i = 0; i < nums.size(); i++) {
        curr_sum += nums[i];
        min_sum = std::min(min_sum, curr_sum);
        min_sum = std::min(min_sum, nums[i]);
        curr_sum = std::min(curr_sum, 0LL);
    }
    
    return min_sum;
}