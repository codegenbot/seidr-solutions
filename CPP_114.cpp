```
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long minSubArraySum(vector<long long> nums) {
    long long sum = 0, min_sum = INT64_MAX;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        if (sum < min_sum) {
            min_sum = sum;
        }
        sum -= nums[i];
    }
    return min_sum;
}
```