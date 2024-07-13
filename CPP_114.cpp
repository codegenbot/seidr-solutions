```cpp
#include <iostream>
#include <vector>

long long minSubArraySum(std::vector<long long> nums) {
    long long min_sum = LLONG_MAX, current_sum = 0;
    for (int i = 0; i < nums.size(); i++) {
        current_sum += nums[i];
        if (current_sum < min_sum)
            min_sum = current_sum;
        if (current_sum > 0) {
            while (current_sum > min_sum && i < nums.size() - 1) {
                current_sum -= nums[i];
                i++;
            }
        }
    }
    return min_sum;
}

int main() {
    std::vector<long long> nums = {2,3,-1,5,-7,2,3};
    long long result = minSubArraySum(nums);
    std::cout << "The minimum subarray sum is: " << result << std::endl;
    return 0;
}