#include <vector>
#include <limits>
#include <cassert>

long long minSubArraySum(std::vector<long long> nums) {
    long long sum = 0, min_sum = LLONG_MAX;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        if(sum > 0)
            min_sum = std::min(min_sum, sum);
        else 
            sum = 0;
    }
    return min_sum;
}

int main() {
    assert(minSubArraySum({1, -1}) == -1);
    return 0;
}