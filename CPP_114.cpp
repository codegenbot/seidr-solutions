```
#include <iostream>
#include <vector>
#include <climits>

long long minSubArraySum(std::vector<long long> nums) {
    long long min_sum = LLONG_MAX;
    for (int i = 0; i < nums.size(); i++) {
        long long sum = 0;
        for (int j = i; j < nums.size(); j++) {
            sum += nums[j];
            if (sum < min_sum) {
                min_sum = sum;
            }
        }
    }
    return min_sum;
}

int main() {
    std::cout << minSubArraySum({1, -1}) << std::endl;
    return 0;
}