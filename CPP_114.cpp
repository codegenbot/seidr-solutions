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

    long long result = minSubArraySum(nums);

    if (result == LLONG_MAX) {
        std::cout << "No subarray found with sum less than or equal to zero.\n";
    } else {
        std::cout << "Minimum subarray sum: " << result << "\n";
    }

    return 0;
}