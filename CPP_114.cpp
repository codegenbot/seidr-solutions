```cpp
#include <iostream>
#include <vector>
#include <algorithm>

long long minSubArraySum(std::vector<long long> nums) {
    long long min_sum = LLONG_MAX;
    long long current_sum = 0;

    for (int i = 0; i < nums.size(); i++) {
        current_sum += nums[i];
        if (current_sum < min_sum)
            min_sum = current_sum;
        if (current_sum > 0) {
            int left = i;
            while (left < nums.size() && current_sum > min_sum)
                current_sum -= nums[left++];
            if (current_sum == min_sum)
                return min_sum;
        }
    }

    return min_sum;
}

int main() {
    std::vector<long long> nums = {1, -1};
    assert(minSubArraySum(nums) == 0);
}