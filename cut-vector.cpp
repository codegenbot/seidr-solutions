#include <vector>
#include <iostream>
using namespace std;

vector<vector<int>> cutVector(vector<int>& nums) {
    int n = nums.size();
    int sum = 0;
    for (int num : nums) {
        sum += num;
    }
    
    int leftSum = 0;
    int rightSum = sum;
    int diff = abs(rightSum - leftSum);
    int cutIndex = -1;
    
    for (int i = 0; i < n; i++) {
        leftSum += nums[i];
        rightSum -= nums[i];
        int newDiff = abs(rightSum - leftSum);
        if (newDiff < diff) {
            diff = newDiff;
            cutIndex = i;
        }
    }
    
    vector<int> leftSubvector(nums.begin(), nums.begin() + cutIndex + 1);
    vector<int> rightSubvector(nums.begin() + cutIndex + 1, nums.end());
    
    return {leftSubvector, rightSubvector};
}

int main() {
    int n;
    cin >> n;
    
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    vector<vector<int>> result = cutVector(nums);
    for (vector<int> subvector : result) {
        for (int num : subvector) {
            cout << num << endl;
        }
    }
    
    return 0;
}