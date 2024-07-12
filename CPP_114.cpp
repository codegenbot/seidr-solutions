#include <vector>
#include <cinttypes>

int64_t minSubArraySum(const std::vector<int64_t>& nums) {
    int64_t min_sum = INT_MAX;
    int64_t current_sum = 0;

    for (int i = 0; i < nums.size(); i++) {
        current_sum += nums[i];

        if (current_sum > 0 && current_sum < min_sum) {
            min_sum = current_sum;
        }

        if (current_sum < 0) {
            current_sum = 0;
        }
    }

    return min_sum;
}

int main() {
    assert(minSubArraySum({1, -1}) == -1);
    return 0;
}