#include <vector>
#include <algorithm>

long long minSubArraySum(std::vector<long long> nums){
    long long min_sum = nums[0];
    long long current_sum = nums[0];

    for(int i = 1; i < nums.size(); i++){
        current_sum = std::min(nums[i], current_sum + nums[i]);
        min_sum = std::min(min_sum, current_sum);
    }

    return min_sum;
}