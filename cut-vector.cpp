#include <iostream>
#include <vector>
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
    int leftSum = 0, rightSum = totalSum;
    int diff = INT_MAX;
    int cutIndex = -1;
    
    for (int i = 0; i < n; ++i) {
        leftSum += nums[i];
        rightSum -= nums[i];
        int currentDiff = std::abs(leftSum - rightSum);
        if (currentDiff < diff) {
            diff = currentDiff;
            cutIndex = i;
        }
    }
    
    for (int i = 0; i <= cutIndex; ++i) {
        cout << nums[i] << std::endl;
    }
    for (int i = cutIndex + 1; i < n; ++i) {
        cout << nums[i] << std::endl;
    }
    
    return 0;
}