#include <vector>
#include <iostream>
#include <climits>  // Add this line

using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int>& nums) {
    int n = nums.size();
    int diff = INT_MAX;
    int index = -1;
    
    for (int i = 1; i < n; i++) {
        int leftSum = 0;
        int rightSum = 0;
        
        for (int j = 0; j < i; j++) {
            leftSum += nums[j];
        }
        
        for (int k = i; k < n; k++) {
            rightSum += nums[k];
        }
        
        int currDiff = abs(leftSum - rightSum);
        
        if (currDiff < diff) {
            diff = currDiff;
            index = i;
        }
    }
    
    vector<int> left(nums.begin(), nums.begin() + index);
    vector<int> right(nums.begin() + index, nums.end());
    
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