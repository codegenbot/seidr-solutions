#include <vector>
#include <climits>

unsigned long minSubArraySumFunction(vector<unsigned long> nums) {
    unsigned long sum = 0, min_sum = ULONG_MAX;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        if (sum < min_sum) {
            min_sum = sum;
        }
        if (sum > ULONG_MAX / 2) { 
            sum = 0;
        }
    }
    return min_sum;
}