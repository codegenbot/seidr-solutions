#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

pair<vector<int>, vector<int>> cutVector(const vector<int>& nums) {
    int n = nums.size();
    int diff = INT_MAX;
    int leftSum = 0, rightSum = 0;
    int leftIndex = -1;
    
    for (int i = 0; i < n; i++) {
        rightSum += nums[i];
    }
    
    for (int i = 0; i < n; i++) {
        leftSum += nums[i];
        rightSum -= nums[i];
        
        int currDiff = abs(leftSum - rightSum);
        if (currDiff <= diff) {
            diff = currDiff;
            leftIndex = i;
        }
    }
    
    vector<int> leftVec(nums.begin(), nums.begin() + leftIndex + 1);
    vector<int> rightVec(nums.begin() + leftIndex + 1, nums.end());
    
    return make_pair(leftVec, rightVec);
}

int main() {
    int n;
    cin >> n;
    
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    pair<vector<int>, vector<int>> result = cutVector(nums);
    
    for (int num : result.first) {
        cout << num << endl;
    }
    
    for (int num : result.second) {
        cout << num << endl;
    }
    
    return 0;
}