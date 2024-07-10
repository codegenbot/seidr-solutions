#include <iostream>
#include <vector>

int main() {
    long long result = minSubArraySum({1, -1});
    assert(result == -1); 
    return 0;
}

long long minSubArraySum(vector<long long> nums) {
    long long res = LLONG_MAX, sum = 0;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        res = min(res, sum);
        if (sum < 0) sum = 0;
    }
    return res;
}