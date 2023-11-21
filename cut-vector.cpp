#include <vector>
#include <iostream>
#include <climits>
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

    return {left, right};
}

int main() {
    int n;
    cin >> n;
    
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    vector<int> result = cutVector(nums);
    
    for (int num : result[0]) {
        cout << num << endl;
    }
    
    for (int num : result[1]) {
        cout << num << endl;
    }
    
    return 0;
}