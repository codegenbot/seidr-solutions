```cpp
#include <iostream>
#include <vector>
using namespace std;

long long minSubArraySum(vector<long long> nums) {
    long long min_sum = INT_MAX;
    for (int start = 0; start < nums.size(); start++) {
        long long sum = 0;
        for (int end = start; end < nums.size(); end++) {
            sum += nums[end];
            if (sum < min_sum) {
                min_sum = sum;
            }
        }
    }
    return min_sum;
}

int main() {
    vector<long long> nums;
    int n, num;
    cout << "Enter the number of elements: ";
    cin >> n;
    
    for(int i=0; i<n; i++) {
        cout << "Enter element " << i+1 << ": ";
        cin >> num;
        nums.push_back(num);
    }
    
    long long result = minSubArraySum(nums);
    cout << "Minimum sum of all subarrays: " << result << endl;
    
    return 0;
}