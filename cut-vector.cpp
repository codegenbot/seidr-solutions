#include <iostream>
#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> nums) {
    int n = nums.size();
    int leftSum = 0;
    int rightSum = 0;
    for (int i = 0; i < n; i++) {
        rightSum += nums[i];
    }
    
    int diff = abs(leftSum - rightSum);
    int cutIndex = 0;
    
    for (int i = 0; i < n; i++) {
        leftSum += nums[i];
        rightSum -= nums[i];
        int newDiff = abs(leftSum - rightSum);
        if (newDiff < diff) {
            diff = newDiff;
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
    
    for (int i = 0; i < result.first.size(); i++) {
        cout << result.first[i] << endl;
    }
    
    for (int i = 0; i < result.second.size(); i++) {
        cout << result.second[i] << endl;
    }
    
    return 0;
}