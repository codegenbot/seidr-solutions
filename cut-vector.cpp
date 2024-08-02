#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <climits>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    
    int totalSum = accumulate(nums.begin(), nums.end(), 0);
    int cutIndex = 0;
    int leftSum = 0;
    
    for (int i = 0; i < n; ++i) {
        int rightSum = totalSum - leftSum;
        int diff = abs(leftSum - rightSum);
        if (diff <= totalSum/2) {
            cutIndex = i;
            break;
        }
        leftSum += nums[i];
    }
    
    for (int i = 0; i < cutIndex; ++i) {
        cout << nums[i] << endl;
    }
    cout << endl;
    for (int i = cutIndex; i < n; ++i) {
        cout << nums[i] << endl;
    }
    
    return 0;
}