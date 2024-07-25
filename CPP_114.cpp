```
#include <iostream>
#include <vector>
#include <climits>

long long minSubArraySum(std::vector<long long> nums){
    long long minSum = LLONG_MAX;
    long long currentSum = 0;

    for(long long num : nums){
        currentSum += num;
        if(currentSum < minSum) minSum = currentSum;
        else if(currentSum > 0) currentSum = 0;
    }

    return minSum;
}