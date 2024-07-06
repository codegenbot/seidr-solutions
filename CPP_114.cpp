#include <vector>
#include <climits>

long long minSubArraySum(std::vector<long long> nums) {
    long long min_sum = LLONG_MAX;
    long long current_sum = 0;

    for (int i = 0; i < nums.size(); i++) {
        current_sum += nums[i];
        
        if (current_sum > 0) {
            min_sum = min(min_sum, current_sum);
        } else {
            current_sum = 0;
        }
    }

    return min_sum == LLONG_MAX ? 0 : min_sum;
}

int main() {
    assert(minSubArraySum({1, -1}) == -1); 
}