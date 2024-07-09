#include <iostream>
#include <vector>
#include <algorithm>

long long minSubArraySum(std::vector<long long> nums) {
    long long min_sum = INT_MAX;
    long long current_sum = 0;

    for (int i = 0; i < nums.size(); i++) {
        current_sum += nums[i];
        if (current_sum < min_sum)
            min_sum = current_sum;
        if (current_sum > 0) {
            int left = i;
            while (left < nums.size() && current_sum >= min_sum)
                current_sum -= nums[left++];
        }
    }

    return min_sum;
}