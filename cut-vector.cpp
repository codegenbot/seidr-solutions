#include <iostream>
#include <vector>
#include <climits>

using namespace std;

vector<int> cutVector(vector<int>& nums) {
    int n = nums.size();
    int diff = INT_MAX;
    int idx = -1;
    
    for (int i = 1; i < n; i++) {
        int leftSum = 0;
        int rightSum = 0;
        
        for (int j = 0; j < i; j++) {
            leftSum += nums[j];
        }
        
        for (int j = i; j < n; j++) {
            rightSum += nums[j];
        }
        
        int currDiff = abs(leftSum - rightSum);
        if (currDiff < diff) {
            diff = currDiff;
            idx = i;
        }
    }
    
    vector<int> left(nums.begin(), nums.begin() + idx);
    vector<int> right(nums.begin() + idx, nums.end());
    
    return vector<int>{left, right};
}

int main() {
    int n;
    cin >> n;
    
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    vector<int> result = cutVector(nums);
    for (int num : result) {
        cout << num << endl;
    }
    
    return 0;
}