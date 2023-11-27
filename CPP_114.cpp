#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

long long minSubArraySum(std::vector<long long> nums){
    long long minSum = nums[0];
    long long currentSum = nums[0];

    for(int i = 1; i < nums.size(); i++){
        currentSum = std::min(nums[i], currentSum + nums[i]);
        minSum = std::min(minSum, currentSum);
    }

    return minSum;
}

int main() {
    assert(minSubArraySum({1, -1}) == -1);

    // Additional test cases
    assert(minSubArraySum({-2, 1, -3, 4, -1, 2, 1, -5, 4}) == -5);
    assert(minSubArraySum({-2, -3, 4, -1, -2, 1, 5, -3}) == -6);
    assert(minSubArraySum({-1, -2, -3, -4, -5}) == -15);
    
    return 0;
}