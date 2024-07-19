```cpp
#include <iostream>
#include <vector>
using namespace std;

long long minSubArraySum(vector<long long> nums) {
    long long sum = 0, min_sum = LLONG_MAX;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        if (sum < min_sum)
            min_sum = sum;
        if (sum > 0)
            sum = 0;
    }
    return min_sum;
}

int main() {
    vector<long long> nums = {2,3,-1,5,-7,2,3};
    cout << "The minimum subarray sum is: " << minSubArraySum(nums) << endl;
    return 0;
}