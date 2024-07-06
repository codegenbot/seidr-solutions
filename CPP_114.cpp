```cpp
#include <vector>
#include <limits>

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

    long long result = minSubArraySum(vector<long long>({1, -1}));
    cout << "The minimum subarray sum is: " << result << endl;
}