#include <vector>
#include <climits>
#include <cmath>
using namespace std;

vector<vector<int>> cutVector(vector<int>& nums) {
    int minDiff = INT_MAX;
    int cutIndex = -1;
    
    for(int i = 0; i < nums.size() - 1; i++) {
        int leftSum = 0, rightSum = 0;
        
        for(int j = 0; j <= i; j++) 
            leftSum += nums[j];
        for(int j = i+1; j < nums.size(); j++) 
            rightSum += nums[j];
        
        if(abs(leftSum - rightSum) < minDiff) {
            minDiff = abs(leftSum - rightSum);
            cutIndex = i;
        }
    }
    
    vector<vector<int>> result(2);
    for(int i = 0; i <= cutIndex; i++) 
        result[0].push_back(nums[i]);
    for(int i = cutIndex+1; i < nums.size(); i++) 
        result[1].push_back(nums[i]);
    
    return result;
}