#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<int> cutVector(vector<int>& nums) {
    int n = nums.size();
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += nums[i];
    }
    
    int leftSum = 0;
    int rightSum = sum;
    int diff = abs(leftSum - rightSum);
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
    
    vector<int> left(nums.begin(), nums.begin() + cutIndex + 1);
    vector<int> right(nums.begin() + cutIndex + 1, nums.end());
    
    left.push_back(0);
    right.push_back(0);
    
    return {left, right};
}

int main() {
    int n;
    cin >> n;
    
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    vector<int> left, right;
    tie(left, right) = cutVector(nums);
    
    for (int num : left) {
        cout << num << endl;
    }
    
    for (int num : right) {
        cout << num << endl;
    }
    
    return 0;
}