```cpp
#include <iostream>
#include <vector>
#include <climits>

int main() {
    std::vector<long long> nums = {1};
    std::cout << minSubArraySum(nums) << std::endl;
    return 0;
}

long long minSubArraySum(std::vector<long long> nums){
    long long min_sum = LLONG_MAX; // Initialize minimum sum as maximum possible value
    long long current_sum = 0;
    
    for(long long num : nums){ 
        current_sum += num;
        
        if(current_sum < min_sum) // Update the minimum sum
            min_sum = current_sum;
        
        if(current_sum > 0) // Reset current sum to 0 when it becomes positive
            current_sum = 0;    
    }
    
    return min_sum;
}