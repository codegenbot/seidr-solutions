#include <vector>
#include <algorithm>

long long minSubArraySum(const std::vector<long long>& nums){
    long long min_sum = nums[0];
    long long current_sum = 0;
    
    for (int i = 0; i < nums.size(); ++i) {
        current_sum += nums[i];
        min_sum = std::min(min_sum, current_sum);
        if (current_sum > 0) {
            current_sum = 0;
        }
    }
    
    return min_sum;
}