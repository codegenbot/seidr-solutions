#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    
    int leftSum = 0, rightSum = 0;
    for (int i = 0; i < n; ++i) {
        rightSum += nums[i];
    }
    
    int minDiff = INT_MAX;
    int cutIdx = -1;
    for (int i = 0; i < n; ++i) {
        leftSum += nums[i];
        rightSum -= nums[i];
        int diff = abs(leftSum - rightSum);
        if (diff < minDiff) {
            minDiff = diff;
            cutIdx = i;
        }
    }
    
    for (int i = 0; i <= cutIdx; ++i) {
        cout << nums[i] << endl;
    }
    cout << endl;
    for (int i = cutIdx + 1; i < n; ++i) {
        cout << nums[i] << endl;
    }
    
    return 0;
}