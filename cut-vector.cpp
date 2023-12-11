#include <iostream>
#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int>& nums) {
    int n = nums.size();
    int left = 0, right = n - 1;
    int leftSum = nums[left], rightSum = nums[right];
    
    while (left < right) {
        if (leftSum < rightSum) {
            left++;
            leftSum += nums[left];
        } else {
            right--;
            rightSum += nums[right];
        }
    }
    
    vector<int> subvector1(nums.begin(), nums.begin() + left + 1);
    vector<int> subvector2(nums.begin() + left + 1, nums.end());
    
    return make_pair(subvector1, subvector2);
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