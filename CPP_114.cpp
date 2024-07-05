#include <iostream>
#include <vector>
#include <algorithm> // Include for std::min

using namespace std;

long long minSubArraySum(vector<long long> nums) {
    long long min_sum = nums[0], curr_sum = nums[0];
    for (size_t i = 1; i < nums.size(); ++i) {
        curr_sum = min(nums[i], curr_sum + nums[i]);
        min_sum = min(min_sum, curr_sum);
    }
    return min_sum;
}

int main() {
    int n;
    cin >> n;
    vector<long long> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    cout << minSubArraySum(nums) << endl;
    return 0;
}