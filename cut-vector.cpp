#include <iostream>
#include <vector>
#include <climits>
#include <cstdlib>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    
    int diff = INT_MAX;
    int cutIndex = 0;
    int leftSum = 0, rightSum = 0;
    for (int i = 0; i < n; ++i) {
        rightSum += nums[i];
    }
    
    for (int i = 0; i < n-1; ++i) {
        leftSum += nums[i];
        rightSum -= nums[i];
        int currentDiff = abs(leftSum - rightSum);
        if (currentDiff <= diff) {
            diff = currentDiff;
            cutIndex = i + 1;
        }
    }
    
    for (int i = 0; i < n; ++i) {
        if (i < cutIndex) {
            cout << nums[i] << endl;
        } else {
            cout << nums[i] << endl;
        }
    }
    
    return 0;
}