```cpp
#include <iostream>
using namespace std;

int minSubArraySum(vector<int> nums) {
    int n = nums.size();
    if (n == 0) return 0;
    
    int min_sum = INT_MAX;
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = i; j < n; j++) {
            sum += nums[j];
            if (sum < min_sum) min_sum = sum;
        }
    }
    
    return min_sum;
}

int main() {
    cout << "minSubArraySum({1, -1}) = " << minSubArraySum({1, -1}) << endl;
    return 0;
}