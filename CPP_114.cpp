#include <iostream>
#include <vector>
#include <climits>

long long minSubArraySum(std::vector<long long> nums) {
    long long sum = 0, min_sum = LLONG_MAX;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        if (sum < min_sum)
            min_sum = sum;
        if (sum > 0)
            sum = 0;
    }
    return min_sum;
}

int main() {
    std::vector<long long> nums = {1,2,-3,4,5};
    std::cout << "Minimum subarray sum: " << minSubArraySum(nums) << std::endl;
    return 0;
}