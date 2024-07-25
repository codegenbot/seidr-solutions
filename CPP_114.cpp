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
        if(currentSum > 0) currentSum = 0;
    }

    return minSum;
}

int main(){
    assert(minSubArraySum({1, -1}) == -1);
    for(long long i = 0; i <= 1000000; ++i){
        std::vector<long long> nums = {i};
        if(i % 2 == 0) continue;
        if(minSubArraySum(nums) != -i/2) {
            std::cout << "Test failed at " << i << std::endl;
            return 1;
        }
    }
    std::cout << "All tests passed." << std::endl;
    return 0;