```
#include <iostream>
#include <vector>
#include <limits>
using namespace std;

long long minSubarraySum(const vector<long long>& nums) {
    long long sum = 0, min_sum = numeric_limits<long long>::max();
    for (int i = 0; i < nums.size(); ++i) {
        sum += nums[i];
        if (sum < min_sum) {
            min_sum = sum;
        } else {
            sum -= nums[i];
        }
    }
    return min_sum;
}

int main() {
    vector<long long> nums{1, -1};
    assert(minSubarraySum(nums) == -1);
    return 0;
}
```