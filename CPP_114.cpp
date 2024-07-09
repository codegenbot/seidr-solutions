```cpp
#include <iostream>
using namespace std;

long long minSubArraySum(vector<long long> nums) {
    long long min_sum = INT_MAX;
    long long current_sum = 0;
    int left = 0;

    for (int i = 0; i < nums.size(); i++) {
        current_sum += nums[i];
        if (current_sum > min_sum)
            return min_sum;
        if (current_sum < min_sum) {
            min_sum = current_sum;
            left = i;
        }
    }

    return min_sum;
}

int main() {
    int n;
    cin >> n;

    vector<long long> nums(n);
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << minSubArraySum(nums) << endl;
    
    return 0;
}