#include <vector>
#include <limits>
#pragma GCC diagnostic push
#include <initializer_list>
#pragma GCC diagnostic pop

int main() {
    long long minSubArraySum(std::vector<long long> nums) {
        long long sum = 0, min_sum = LLONG_MAX;
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