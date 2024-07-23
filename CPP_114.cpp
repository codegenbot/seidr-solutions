#include <iostream>
#include <vector>

long long minSubArraySum(std::vector<long long> nums) {
    long long sum = 0, min_sum = LLONG_MAX;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        if (sum < min_sum)
            min_sum = sum;
        if (sum > 0) {
            int left = i;
            while (left > 0 && sum - nums[left-1] >= 0) {
                sum -= nums[left-1];
                left--;
            }
            if (sum < min_sum)
                min_sum = sum;
        }
    }
    return min_sum;
}

int main() {
    assert (minSubArraySum({1, -1}) == -1);
}