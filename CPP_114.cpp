```cpp
#include <iostream>
#include <vector>

long long minSubArraySum(std::vector<long long> nums) {
    long long sum = 0, min_sum = LLONG_MAX;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        min_sum = std::min(min_sum, sum);
        if (sum > 0) sum = 0;
    }
    return min_sum;
}

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    std::vector<long long> nums(n);
    for (int i = 0; i < n; i++) {
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> nums[i];
    }
    std::cout << "Minimum subarray sum: " << minSubArraySum(nums) << std::endl;
    return 0;
}