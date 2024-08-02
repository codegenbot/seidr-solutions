#include <iostream>
#include <vector>
using namespace std;

long long minSubArraySum(vector<long long> nums) {
    long long min_sum = INT64_MAX;
    long long current_sum = 0;

    for (int i = 0; i < nums.size(); i++) {
        current_sum += nums[i];
        if (current_sum > 0) {
            min_sum = min(min_sum, current_sum);
        } else {
            current_sum = 0;
        }
    }

    return min_sum == INT64_MAX ? 0 : min_sum;
}

int main() {
    vector<long long> nums = {1, -1};
    cout << minSubArraySum(nums) << endl;
    return 0;
}