#include <iostream>
#include <vector>

long long minSubArraySum(std::vector<long long> nums) {
    long long sum = 0, min_sum = INT_MAX;
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
    assert(minSubArraySum({1, -1}) == -1);
    // ... rest of your code
}