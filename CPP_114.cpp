#include <vector>
#include <limits>

long long minSubArraySum(std::vector<long long> nums){
    long long sum = 0, min_sum = std::numeric_limits<long long>::max();
    for (long long num : nums) {
        sum += num;
        if (sum < min_sum)
            min_sum = sum;
        else if (sum > 0)
            sum = 0;
    }
    return min_sum;
}