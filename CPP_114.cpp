```cpp
#include <iostream>
#include <vector>

long long minSubArraySum(std::vector<long long> nums) {
    long long total = 0;
    long long min_sum = LLONG_MAX;

    for (int i = 0; i < nums.size(); i++) {
        total += nums[i];
        if (total < min_sum) {
            min_sum = total;
        }
        if (total > 0) {
            total = 0;
        }
    }

    return min_sum;
}

int main() {
    if (minSubArraySum({1, -1}) != -1) {
        std::cerr << "Error: The minimum subarray sum is not calculated correctly." << std::endl;
        return 1;
    } else {
        std::cout << "The code runs successfully!" << std::endl;
        return 0;
    }
}