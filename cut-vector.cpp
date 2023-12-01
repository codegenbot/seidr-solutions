#include <iostream>
#include <vector>
#include <climits>

using namespace std;

pair<vector<int>, vector<int>> cutVector(const vector<int>& nums) {
    int n = nums.size();
    int diff = INT_MAX;
    int idx = -1;
    
    for (int i = 0; i < n - 1; i++) {
        int leftSum = 0;
        int rightSum = 0;
        
        for (int j = 0; j <= i; j++) {
            leftSum += nums[j];
        }
        
        for (int j = i + 1; j < n; j++) {
            rightSum += nums[j];
        }
        
        int currDiff = abs(leftSum - rightSum);
        
        if (currDiff < diff) {
            diff = currDiff;
            idx = i;
        }
    }
    
    vector<int> leftSubvector;
    vector<int> rightSubvector;
    
    for (int i = 0; i <= idx; i++) {
        leftSubvector.push_back(nums[i]);
    }
    
    for (int i = idx + 1; i < n; i++) {
        rightSubvector.push_back(nums[i]);
    }
    
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
    
    for (int num : result.first) {
        cout << num << endl;
    }
    
    for (int num : result.second) {
        cout << num << endl;
    }
    
    return 0;
}