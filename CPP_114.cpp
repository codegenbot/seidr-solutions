#include <vector>
#include <algorithm>

long long minSubArraySum(const std::vector<long long>& nums) {
    long long min_sum = nums[0], current_sum = 0;
    
    for (long long num : nums) {
        current_sum = std::min(num, current_sum + num);
        min_sum = std::min(min_sum, current_sum);
    }
    
    return min_sum;
}