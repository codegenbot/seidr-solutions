```cpp
#include <vector>
#include <limits>

long long minSubArraySum(std::vector<long long> nums) {
    long long sum = 0;
    long long min_sum = std::numeric_limits<long long>::max();

    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        if (sum < min_sum) {
            min_sum = sum;
        }
        if (sum > 0) {
            int left = i;
            while (left < nums.size() && sum >= 1) {
                sum -= nums[left++];
            }
            if (sum <= 0) {
                min_sum = std::min(min_sum, sum);
            }
            sum = 0;
        }
    }

    return min_sum;
}

int main() {
    // add your code here
    return 0;
}