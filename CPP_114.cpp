#include <iostream>
#include <vector>

long long minSubArraySum(std::vector<long long> nums) {
    if (nums.empty()) {
        return 0;
    }
    long long sum = 0, min_sum = LONG_LONG_MAX;
    int start = 0;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        if (sum < min_sum)
            min_sum = sum;
        while (start <= i && sum > 1) {
            sum -= nums[start++];
        }
    }
    return min_sum;
}

int main() {
    std::cout << "minSubArraySum({1,2,3}) == " << minSubArraySum({1, 2, 3}) << std::endl;
    return 0;
}