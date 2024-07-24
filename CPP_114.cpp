#include <iostream>
#include <vector>

long long minSubArraySum(std::vector<long long> nums) {
    long long sum = 0;
    long long min_sum = LONG_LONG_MAX;
    for(int i=0; i<nums.size();i++){
        sum += nums[i];
        if(sum < min_sum) min_sum = sum;
        if(sum > 0) sum = 0;
    }
    return min_sum;
}

int main() {
    std::vector<long long> nums = {1, -1};
    std::cout << minSubArraySum(nums) << std::endl;
    return 0;
}