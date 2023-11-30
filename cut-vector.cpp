#include <iostream>
#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int>& nums) {
    int n = nums.size();
    int leftSum = 0, rightSum = 0;
    for (int i = 0; i < n; i++) {
        rightSum += nums[i];
    }
    
    int minDiff = abs(leftSum - rightSum);
    int cutIndex = 0;
    
    for (int i = 0; i < n; i++) {
        leftSum += nums[i];
        rightSum -= nums[i];
        int diff = abs(leftSum - rightSum);
        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i + 1;
        }
    }
    
    vector<int> left(nums.begin(), nums.begin() + cutIndex);
    vector<int> right(nums.begin() + cutIndex, nums.end());
    
    return make_pair(left, right);
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