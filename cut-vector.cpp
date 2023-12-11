#include <vector>
#include <iostream>
using namespace std;

pair<vector<int>, vector<int>> cutVector(const vector<int>& nums) {
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
        if (diff <= minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }
    
    vector<int> leftSubvector(nums.begin(), nums.begin() + cutIndex + 1);
    vector<int> rightSubvector(nums.begin() + cutIndex + 1, nums.end());
    
    return make_pair(leftSubvector, rightSubvector);
}

int main() {
    int n;
    cin >> n;
    
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    pair<vector<int>, vector<int>> subvectors = cutVector(nums);
    
    for (int num : subvectors.first) {
        cout << num << endl;
    }
    
    for (int num : subvectors.second) {
        cout << num << endl;
    }
    
    return 0;
}