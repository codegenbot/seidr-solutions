#include <iostream>
#include <vector>

long long minSubArraySum(std::vector<long long> nums) {
    long long min_sum = INT_MAX;
    long long current_sum = 0;

    for (int i = 0; i < nums.size(); i++) {
        current_sum += nums[i];
        if (current_sum < min_sum)
            min_sum = current_sum;
        if (current_sum > 0) {
            int left = i;
            while (left < nums.size() && current_sum - nums[left] >= min_sum) {
                current_sum -= nums[left++];
            }
        }
    }

    return min_sum;
}

int main() {
    std::vector<long long> nums;
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        long long x;
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> x;
        nums.push_back(x);
    }
    long long result = minSubArraySum(nums);
    if (result == INT_MAX)
        std::cout << "No valid subarray found.\n";
    else
        std::cout << "Minimum sum of a subarray is: " << result << "\n";

    return 0;
}