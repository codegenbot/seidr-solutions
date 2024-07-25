#include <iostream>
#include <vector>
#include <climits>
#include <cassert>

long long minSubArraySum(std::vector<long long> nums){
    long long minSum = LLONG_MAX;
    long long currentSum = 0;

    for(long long num : nums){
        currentSum += num;
        if(currentSum < minSum) minSum = currentSum;
    }

    return minSum;
}

assert(minSubArraySum({1, -1}) == -1);