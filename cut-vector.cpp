#include <vector>
#include <iostream>
using namespace std;

vector<int> cutVector(vector<int>& nums) {
    int n = nums.size();
    int leftSum = 0;
    int rightSum = 0;
    
    // Calculate the sum of all elements in the vector
    for (int i = 0; i < n; i++) {
        rightSum += nums[i];
    }
    
    // Iterate through the vector and find the spot where the difference is minimized
    int minDiff = abs(leftSum - rightSum);
    int cutIndex = -1;
    for (int i = 0; i < n; i++) {
        leftSum += nums[i];
        rightSum -= nums[i];
        int diff = abs(leftSum - rightSum);
        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }
    
    // Create the two resulting subvectors
    vector<int> subvector1(nums.begin(), nums.begin() + cutIndex + 1);
    vector<int> subvector2(nums.begin() + cutIndex + 1, nums.end());
    
    return {subvector1, subvector2};
}

int main() {
    int n;
    cin >> n;
    
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    vector<vector<int>> result = cutVector(nums);
    
    for (int i = 0; i < result[0].size(); i++) {
        cout << result[0][i] << endl;
    }
    
    for (int i = 0; i < result[1].size(); i++) {
        cout << result[1][i] << endl;
    }
    
    return 0;
}