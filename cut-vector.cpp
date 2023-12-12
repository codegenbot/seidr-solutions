#include <vector>
#include <iostream>
using namespace std;

vector<int> cutVector(vector<int>& nums) {
    int n = nums.size();
    int sum = 0;
    for (int num : nums) {
        sum += num;
    }
    
    int leftSum = 0;
    int rightSum = sum;
    int diff = abs(rightSum - leftSum);
    int cutIndex = -1;
    
    for (int i = 0; i < n; i++) {
        leftSum += nums[i];
        rightSum -= nums[i];
        int newDiff = abs(rightSum - leftSum);
        if (newDiff < diff) {
            diff = newDiff;
            cutIndex = i;
        }
    }
    
    vector<int> leftSubvector(nums.begin(), nums.begin() + cutIndex + 1);
    vector<int> rightSubvector(nums.begin() + cutIndex + 1, nums.end());
    
    return vector<int>(leftSubvector.begin(), leftSubvector.end(), rightSubvector.begin(), rightSubvector.end());
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