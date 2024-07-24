#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> nums) {
    int n = nums.size();
    vector<vector<int>> res;
    
    for (int i = 1; i <= n/2; i++) {
        int leftSum = 0, rightSum = 0;
        for (int j = 0; j < i; j++) {
            leftSum += nums[j];
        }
        for (int k = i; k < n; k++) {
            rightSum += nums[k];
        }
        
        if (abs(leftSum - rightSum) <= abs(nums[i] - nums[n-i-1])) {
            res.push_back(vector<int>(nums.begin(), nums.begin() + i));
            res.push_back(vector<int>(nums.begin() + i, nums.end()));
            return res;
        }
    }
    
    // If no cut found, return the original vector
    res.push_back(nums);
    return res;
}