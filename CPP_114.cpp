```cpp
#include <iostream>
#include <vector>
#include <limits>

long long minSubArraySum(std::vector<long long> nums) {
    long long sum = 0, min_sum = std::numeric_limits<long long>::max();
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        if (sum < min_sum)
            min_sum = sum;
        if (sum > 0)
            sum = 0;
    }
    return min_sum;
}

int main() {
    int n;
    std::cout << "Enter the number of elements in the array: ";
    std::cin >> n;
    std::vector<long long> nums(n);
    
    for (long long &num : nums) {
        std::cout << "Enter element " << nums.size() + 1 - nums.begin() - &num << ": ";
        std::cin >> num;
    }
    
    long long result = minSubArraySum(nums);
    if (result == std::numeric_limits<long long>::max())
        std::cout << "Minimum sum of all subarrays is not possible.\n";
    else
        std::cout << "The minimum sum of all subarrays is " << result << ".\n";
    
    return 0;
}