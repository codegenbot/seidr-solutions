#include <vector>
#include <iostream>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int>& nums) {
    int n = nums.size();
    int leftSum = 0, rightSum = 0;
    for (int i = 0; i < n; i++) {
        rightSum += nums[i];
    }
    
    int diff = abs(leftSum - rightSum);
    int cutIndex = -1;
    
    for (int i = 0; i < n; i++) {
        leftSum += nums[i];
        rightSum -= nums[i];
        int newDiff = abs(leftSum - rightSum);
        if (newDiff < diff) {
            diff = newDiff;
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
    
    pair<vector<int>, vector<int>> result = cutVector(nums);
    for (int i = 0; i < result.first.size(); i++) {
        cout << result.first[i] << endl;
    }
    for (int i = 0; i < result.second.size(); i++) {
        cout << result.second[i] << endl;
    }
    
    return 0;
}