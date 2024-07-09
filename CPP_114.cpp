```cpp
#include <iostream>
#include <vector>
#include <climits>

long long minSubArraySum(std::vector<long long> nums) {
    long long min_sum = LLONG_MAX;
    for (int start = 0; start < nums.size(); start++) {
        long long sum = 0;
        for (int end = start; end < nums.size(); end++) {
            sum += nums[end];
            if (sum < min_sum) {
                min_sum = sum;
            }
        }
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

    long long result = minSubArraySum(nums);

    std::cout << "Minimum subarray sum: " << result << std::endl;

    return 0;
}