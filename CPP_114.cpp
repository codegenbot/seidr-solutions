#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

long long minSubArraySum(std::vector<long long> nums) {
    long long minSum = nums[0];
    long long currentSum = nums[0];

    for (int i = 1; i < nums.size(); i++) {
        currentSum = std::min(nums[i], currentSum + nums[i]);
        minSum = std::min(minSum, currentSum);
    }

    return minSum;
}

int main() {
    assert(minSubArraySum({1, -1}) == -1);

    // Additional test cases
    assert(minSubArraySum({1, 2, 3, 4, 5}) == 1);
    assert(minSubArraySum({-1, -2, -3, -4, -5}) == -15);
    assert(minSubArraySum({5, -3, 4, -9, 2}) == -8);

    std::cout << "All test cases passed!" << std::endl;

    return 0;
}