#include <iostream>
#include <vector>
using namespace std;

long long minSubArraySum(vector<long long> nums) {
    long long sum = 0, min_sum = LLONG_MAX;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        min_sum = min(min_sum, sum);
    }
    return min_sum;
}

int main() {
    vector<long long> nums = {1, -1};
    cout << minSubArraySum(nums) << endl;
    return 0;
}