```cpp
#include <iostream>
#include <vector>
using namespace std;

long long minSubArraySum(vector<long long> nums) {
    long long sum = 0, min_sum = LLONG_MAX;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        min_sum = min(min_sum, sum);
        if (sum > 0) sum = 0;
    }
    return min_sum;
}

int main() {
    vector<long long> nums;
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    for(int i=0; i<n; i++) {
        long long x;
        cout << "Enter element " << i+1 << ": ";
        cin >> x;
        nums.push_back(x);
    }
    long long result = minSubArraySum(nums);
    cout << "Minimum subarray sum: " << result << endl;
    return 0;
}