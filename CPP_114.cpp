#include <iostream>
#include <vector>
#include <limits>

long long minSubArraySum(std::vector<long long> nums) {
    long long min_sum = std::numeric_limits<long long>::max(); // Initialize minimum sum as maximum possible value
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

int main() {
    std::vector<long long> nums = {1,2,-3,4,5,-2,-8};
    long long result = minSubArraySum(nums);
    std::cout << "Minimum subarray sum is: " << result << std::endl;

    return 0;
}