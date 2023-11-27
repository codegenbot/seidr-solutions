#include <vector>
#include <iostream>
using namespace std;

vector<int> cutVector(vector<int>& nums) {
    int sum = 0;
    for (int num : nums) {
        sum += num;
    }
    
    int target = sum / 2;
    int currSum = 0;
    int idx = 0;
    
    while (currSum < target) {
        currSum += nums[idx];
        idx++;
    }
    
    vector<int> subvector1(nums.begin(), nums.begin() + idx);
    vector<int> subvector2(nums.begin() + idx, nums.end());
    
    return {subvector1, subvector2};
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