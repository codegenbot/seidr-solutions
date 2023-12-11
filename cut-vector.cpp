#include <vector>
#include <iostream>
using namespace std;

vector<int> cutVector(vector<int>& nums) {
    int n = nums.size();
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += nums[i];
    }
    
    int target = sum / 2;
    int currSum = 0;
    int cutIndex = -1;
    for (int i = 0; i < n; i++) {
        currSum += nums[i];
        if (currSum == target || currSum == target + 1) {
            cutIndex = i;
            break;
        }
    }
    
    vector<int> subvector1(nums.begin(), nums.begin() + cutIndex + 1);
    vector<int> subvector2(nums.begin() + cutIndex + 1, nums.end());
    
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