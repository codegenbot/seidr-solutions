```cpp
#include <iostream>
#include <vector>

long long minSubArraySum(std::vector<long long> nums) {
    long long min_sum = LLONG_MAX;
    long long current_sum = 0;

    for (int i = 0; i < nums.size(); i++) {
        current_sum += nums[i];
        if (current_sum < min_sum)
            min_sum = current_sum;
    }
    return min_sum;
}

int main() {
    std::vector<long long> nums = {1, -1};
    std::cout << minSubArraySum(nums) << std::endl;
}