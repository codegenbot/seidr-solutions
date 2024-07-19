#include <iostream>
#include <vector>
using namespace std;

long long minSubArraySum(vector<long long> nums) {
    long long sum = 0, min_sum = INT_MAX;
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
    vector<long long> nums;
    int n, x;
    cout << "Enter number of elements: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cout << "Enter element" << i << ": ";
        cin >> x;
        nums.push_back(x);
    }
    cout << "Minimum sum of all subarrays is: " << minSubArraySum(nums) << endl;
    return 0;
}