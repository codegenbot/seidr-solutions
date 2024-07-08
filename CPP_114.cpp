```cpp
#include <vector>

long long minSubArraySum(std::vector<long long> nums) {
    long long sum = 0, min_sum = LLONG_MAX;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        if (sum >= min_sum)
            continue;
        int left = i;
        while (sum < min_sum && left < nums.size()) {
            sum += nums[left++];
        }
        min_sum = sum;
    }
    return min_sum;
}