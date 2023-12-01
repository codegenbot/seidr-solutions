#include <iostream>
#include <vector>
using namespace std;

vector<int> cutVector(vector<int>& nums) {
    int n = nums.size();
    int diff = INT_MAX;
    int index = 0;
    
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

    vector<int> result1, result2;
    tie(result1, result2) = cutVector(nums);

    for (int i : result1) {
        cout << i << endl;
    }

    for (int i : result2) {
        cout << i << endl;
    }

    return 0;
}