#include <vector>
#include <limits>

int minSubArraySum(std::vector<long long> nums) {
    int sum = 0;
    int min_sum = std::numeric_limits<int>::max();
    for(int i=0; i<nums.size();i++){
        sum += nums[i];
        if(sum < min_sum) min_sum = sum;
        if(sum > 0) sum = 0;
    }
    return min_sum;
}