#include <limits>

int main() {
    long long minSubArraySum(long long nums[], int n) {
        long long sum = 0, min_sum = LLONG_MAX;
        for (int i = 0; i < n; i++) {
            sum += nums[i];
            min_sum = std::min(min_sum, sum);
            if (sum > 0) {
                sum = 0;
            }
        }
        return min_sum;
    }

    assert(minSubArraySum({1, -1}, 2) == -1);
}