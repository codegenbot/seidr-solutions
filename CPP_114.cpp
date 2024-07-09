#include <iostream>
#include <vector>

long long minSubArraySum(std::vector<long long> nums) {
    long long min_sum = LLONG_MAX;
    long long current_sum = 0;

    for (int i = 0; i < nums.size(); i++) {
        current_sum += nums[i];

        if (current_sum < min_sum) {
            min_sum = current_sum;
        }

        if (current_sum > 0) {
            int left = i;
            while (left >= 0 && current_sum > min_sum) {
                current_sum -= nums[left];
                left--;
            }
        } else {
            current_sum = 0;
        }
    }

    return min_sum;
}

int main() {
    std::vector<long long> nums = {1, 2, 3};
    long long result = minSubArraySum(nums);
    std::cout << "The minimum sum of all subarrays is: " << result << std::endl;

    return 0;
}