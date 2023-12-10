```
#include <vector>
#include <iostream>
#include <climits>
#include <tuple>

using namespace std;

vector<int> cutVector(vector<int> nums) {
    int n = nums.size();
    int diff = INT_MAX;
    int idx = -1;
    
    for (int i = 0; i < n-1; i++) {
        int leftSum = 0;
        int rightSum = 0;
        
        for (int j = 0; j <= i; j++) {
            leftSum += nums[j];
        }
        
        for (int j = i+1; j < n; j++) {
            rightSum += nums[j];
        }
        
        int curDiff = abs(leftSum - rightSum);
        if (curDiff < diff) {
            diff = curDiff;
            idx = i;
        }
    }
    
    vector<int> left(nums.begin(), nums.begin() + idx + 1);
    vector<int> right(nums.begin() + idx + 1, nums.end());
    
    left.push_back(0);
    right.push_back(0);
    
    return make_tuple(left, right);
}

int main() {
    int n;
    cin >> n;
    
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    vector<int> result1, result2;
    tie(result1, result2) = cutVector(nums);
    
    for (int num : result1) {
        cout << num << endl;
    }
    
    for (int num : result2) {
        cout << num << endl;
    }
    
    return 0;
}
```