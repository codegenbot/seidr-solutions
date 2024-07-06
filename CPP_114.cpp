```cpp
#include <vector>
#include <limits>

int main() {
    int minSubArraySum(std::vector<int> nums) {
        int sum = 0, min_sum = INT_MAX;
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            min_sum = std::min(min_sum, sum);
            if (sum > 0) {
                sum = 0;
            }
        }
        return min_sum;
    }

    assert(minSubArraySum({1, -1}) == -1);
}