#include <iostream>
#include <vector>
#include <cassert>

long long minSubArraySum(std::vector<int>& nums) {
    long long min_sum = nums[0], curr_sum = 0;
    for (int i = 0; i < nums.size(); i++) {
        curr_sum = std::min(static_cast<long long>(nums[i]), curr_sum + nums[i]);
        min_sum = std::min(min_sum, curr_sum);
    }
    return min_sum;
}

int main() {
    assert(minSubArraySum({1, -1}) == -1);
    
    return 0;
}