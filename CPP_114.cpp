#include <iostream>
#include <vector>

long long minSubArraySum(std::vector<long long> nums) {
    int n = nums.size();
    long long min_sum = LLONG_MAX;
    for (int i = 0; i < n; ++i) {
        long long sum = 0;
        for (int j = i; j < n; ++j) {
            sum += nums[j];
            if (sum < min_sum)
                min_sum = sum;
        }
    }
    return min_sum;
}

int main() {
    std::vector<long long> nums = {1, -1};
    assert(minSubArraySum(nums) == -1);
    return 0;
}