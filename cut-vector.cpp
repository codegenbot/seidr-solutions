#include <vector>
#include <iostream>
using namespace std;

vector<vector<int>> cutVector(vector<int>& nums) {
    int n = nums.size();
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += nums[i];
    }
    
    int leftSum = 0;
    int rightSum = sum;
    int diff = abs(leftSum - rightSum);
    int cutIndex = 0;
    
    for (int i = 0; i < n; i++) {
        leftSum += nums[i];
        rightSum -= nums[i];
        int newDiff = abs(leftSum - rightSum);
        if (newDiff < diff) {
            diff = newDiff;
            cutIndex = i;
        }
    }
    
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
        cout << result[0][i] << " ";
    }
    cout << endl;
    
    for (int i = 0; i < result[1].size(); i++) {
        cout << result[1][i] << " ";
    }
    cout << endl;
    
    return 0;
}