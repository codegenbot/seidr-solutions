#include <iostream>
#include <vector>

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
    if (minSubArraySum({1, -1}) == -1) {
        std::cout << "Test case passed!";
    }
    
    return 0;
}