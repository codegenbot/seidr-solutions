#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    int totalSum = 0;
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
        totalSum += nums[i];
    }

    int leftSum = 0, minDiff = INT_MAX, cutIndex = -1;
    for (int i = 0; i < n; i++) {
        leftSum += nums[i];
        int rightSum = totalSum - leftSum;
        int currentDiff = abs(leftSum - rightSum);
        
        if (currentDiff < minDiff) {
            minDiff = currentDiff;
            cutIndex = i;
        }
    }

    for (int i = 0; i <= cutIndex; i++) cout << nums[i] << " ";
    cout << endl;
    for (auto i = cutIndex + 1; i < n; i++) cout << nums[i] << " ";
    cout << endl;

    return 0;
}