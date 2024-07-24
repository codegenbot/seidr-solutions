#include <iostream>
#include <vector>
#include <limits>

long long minSubArraySum(std::vector<long long> nums) {
    long long min_sum = LLONG_MAX;
    for (int i = 0; i < nums.size(); ++i) {
        long long sum = 0;
        for (int j = i; j < nums.size(); ++j) {
            sum += nums[j];
            if (sum < min_sum)
                min_sum = sum;
        }
    }
    return min_sum;
}

int main() {
    std::vector<long long> nums = {2,3,-1,5,-7,2,3};
    long long result = minSubArraySum(nums);
    std::cout << "Minimum subarray sum: " << result << std::endl;
    return 0;
}