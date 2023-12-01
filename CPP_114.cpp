#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long long minSubArraySum(vector<long long> nums){
    long long currentSum = nums[0];
    long long minSum = nums[0];
    
    for (int i = 1; i < nums.size(); i++) {
        currentSum = min(nums[i], currentSum + nums[i]);
        minSum = min(minSum, currentSum);
    }
    
    return minSum;
}

int main() {
    assert (minSubArraySum({1, -1}) == -1);
    assert (minSubArraySum({1, 2, -3, 4, -5}) == -3);
    assert (minSubArraySum({-1, -2, -3, -4, -5}) == -15);
    assert (minSubArraySum({5, -2, 3, 1, -7}) == -2);
    
    return 0;
}