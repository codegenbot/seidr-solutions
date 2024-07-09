#include <vector>
#include <climits>
#include <assert>
#include <limits>

long long minSubArray(std::vector<long long> nums) {
    long long sum = 0, min_sum = LLONG_MAX;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        if (sum < min_sum) {
            min_sum = sum;
        }
        while(sum > 0 && i < nums.size()) {
            sum -= nums[i++];
        }
    }
    return min_sum;
}

int testMain() {
    assert(minSubArray({1, -1}) == -1);
    return 0;
}