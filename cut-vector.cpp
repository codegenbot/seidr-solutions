#include <iostream>
#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int>& nums) {
    int n = nums.size();
    int leftSum = 0, rightSum = 0;
    for (int i = 0; i < n; i++) {
        rightSum += nums[i];
    }
    
    int diff = INT_MAX;
    int cutIndex = -1;
    
    for (int i = 0; i < n; i++) {
        leftSum += nums[i];
        rightSum -= nums[i];
        
        int currDiff = abs(leftSum - rightSum);
        if (currDiff < diff) {
            diff = currDiff;
            cutIndex = i;
        }
    }
    
    vector<int> leftSubVector(nums.begin(), nums.begin() + cutIndex + 1);
    vector<int> rightSubVector(nums.begin() + cutIndex + 1, nums.end());
    
    return make_pair(leftSubVector, rightSubVector);
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