#include <vector>
#include <limits>

long long minSubArraySum(std::vector<long long> nums) {
    long long total = 0;
    long long min_sum = std::numeric_limits<long long>::max();

    for (int i = 0; i < nums.size(); i++) {
        total += nums[i];

        if (total < min_sum)
            min_sum = total;

        if (total > 0) 
            total = 0;
    }

    return min_sum;
}

int main() {
    assert(minSubArraySum({1, -1}) == -1);
}