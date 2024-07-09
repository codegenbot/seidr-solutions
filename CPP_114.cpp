#include <iostream>
#include <vector>

long long minSubArraySum(std::vector<long long> nums) {
    long long current_sum = 0, min_sum = INT_MAX;
    for (int i = 0; i < nums.size(); i++) {
        current_sum += nums[i];
        if (current_sum > min_sum)
            return min_sum;
        else
            min_sum = std::min(min_sum, current_sum);
    }
    return min_sum;
}

int main() {
    assert(minSubArraySum({1, -1}) == -1);
    return 0;
}