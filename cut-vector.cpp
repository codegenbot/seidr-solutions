#include <vector>
#include <iostream>
using namespace std;

vector<int> cutVector(vector<int> nums) {
    int n = nums.size();
    int diff = INT_MAX;
    int index = -1;
    
    for (int i = 1; i < n; i++) {
        int leftSum = 0;
        int rightSum = 0;
        
        for (int j = 0; j < i; j++) {
            leftSum += nums[j];
        }
        
        for (int j = i; j < n; j++) {
            rightSum += nums[j];
        }
        
        int currentDiff = abs(leftSum - rightSum);
        if (currentDiff < diff) {
            diff = currentDiff;
            index = i;
        }
    }
    
    vector<int> left(nums.begin(), nums.begin() + index);
    vector<int> right(nums.begin() + index, nums.end());
    
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
    
    vector<vector<int>> result = cutVector(nums);
    
    for (int i = 0; i < result[0].size(); i++) {
        cout << result[0][i] << endl;
    }
    
    for (int i = 0; i < result[1].size(); i++) {
        cout << result[1][i] << endl;
    }
    
    return 0;
}