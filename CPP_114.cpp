#include <iostream>
#include <vector>
#include <climits>
#include <cassert>

int minSubArraySum(std::vector<long long> nums){
    long long minSum = LLONG_MAX;
    long long currentSum = 0;

    for(long long num : nums){
        currentSum += num;
        if(currentSum < minSum) minSum = currentSum;
    }

    return minSum;
}

int main(){
    assert (minSubArraySum({1, -1}) == -1);
    return 0;
}