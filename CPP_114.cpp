#include <iostream>
#include <vector>

long long minSubArraySum(std::vector<long long> nums) {
    long long min_sum = INT_MAX, current_sum = 0;
    for (int i = 0; i < nums.size(); i++) {
        current_sum += nums[i];
        if (current_sum < min_sum)
            min_sum = current_sum;
        if (current_sum > 0)
            current_sum = 0;
    }
    return min_sum;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<long long> nums(n);
    for(int i=0; i<n; i++) {
        std::cin >> nums[i];
    }

    std::cout << "Minimum subarray sum: " << minSubArraySum(nums) << std::endl;

    return 0;
}