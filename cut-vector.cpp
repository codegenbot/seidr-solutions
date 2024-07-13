#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> nums) {
    int minDiff = INT_MAX;
    pair<vector<int>, vector<int>> res;
    
    for (int i = 0; i < nums.size(); i++) {
        int leftSum = 0, rightSum = 0;
        
        for (int j = 0; j < i; j++) {
            leftSum += nums[j];
        }
        
        for (int j = i; j < nums.size(); j++) {
            rightSum += nums[j];
        }
        
        int diff = abs(leftSum - rightSum);
        
        if (diff <= minDiff) {
            minDiff = diff;
            res.first = vector<int>(nums.begin(), nums.begin() + i);
            res.second = vector<int>(nums.begin() + i, nums.end());
        }
    }
    
    return res;
}