#include <vector>
#include <algorithm>

long long minSubArraySum(std::vector<long long> nums) {
    long long min_sum = INT_MAX;
    long long current_sum = 0;

    for (int i = 0; i < nums.size(); i++) {
        current_sum += nums[i];
        if (current_sum > 0) {
            min_sum = std::min(min_sum, current_sum);
        } else {
            current_sum = 0;
        }
    }

    return min_sum;

}

int main() {
    assert(minSubArraySum({1, -1}) == -1);
    return 0;