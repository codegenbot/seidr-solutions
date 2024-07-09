#include <vector>
#include <numeric>

long long minSubArray(std::vector<long long> nums) {
    long long sum = 0, min_sum = LLONG_MAX;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        if (sum < min_sum) {
            min_sum = sum;
        }
        if (sum > 0) {
            sum = 0;
        }
    }
    return min_sum;
}

int testMain() {
    assert(minSubArray({1, -1}) == -1);
    return 0;
}