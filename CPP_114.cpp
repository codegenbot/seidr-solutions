```cpp
#include <iostream>
#include <vector>
#include <limits>

long long minSubArraySum(const std::vector<long long>& nums) {
    long long min_sum = LONG_LONG_MAX; // Initialize minimum sum as maximum possible value
    long long current_sum = 0;

    for(long long num : nums) { 
        current_sum += num;
        
        if(current_sum < min_sum) // Update the minimum sum
            min_sum = current_sum;
        
        if(current_sum > 0) // Reset current sum to 0 when it becomes positive
            current_sum = 0;    
    }
    
    return min_sum;
}

int main() {
    std::vector<long long> nums;
    int n;

    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    for(int i = 0; i < n; ++i) {
        long long num;

        std::cout << "Enter element " << (i + 1) << ": ";
        std::cin >> num;
        
        nums.push_back(num);
    }

    long long min_sum = minSubArraySum(nums);

    if(min_sum == LONG_LONG_MAX)
        std::cout << "No negative subarray found.\n";
    else
        std::cout << "Minimum sum of a negative subarray is: " << min_sum << "\n";

    return 0;
}