#include <iostream>
#include <vector>
#include <climits>
#include <numeric>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    
    int leftSum = 0, totalSum = accumulate(nums.begin(), nums.end(), 0);
    int minDiff = INT_MAX, cutIndex = 0;
    
    for (int i = 0; i < n; ++i) {
        int diff = abs(2*leftSum - totalSum);
        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
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