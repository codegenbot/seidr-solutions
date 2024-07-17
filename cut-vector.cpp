#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> nums) {
    int n = nums.size();
    int minDiff = INT_MAX;
    int splitIndex = -1;
    
    for (int i = 0; i < n; i++) {
        int leftSum = 0, rightSum = 0;
        
        for (int j = 0; j < i; j++) {
            leftSum += nums[j];
        }
        
        for (int j = i; j < n; j++) {
            rightSum += nums[j];
        }
        
        int diff = abs(leftSum - rightSum);
        if (diff < minDiff) {
            minDiff = diff;
            splitIndex = i;
        }
    }
    
    vector<vector<int>> result(2);
    for (int i = 0; i < splitIndex; i++) {
        result[0].push_back(nums[i]);
    }
    for (int i = splitIndex; i < nums.size(); i++) {
        result[1].push_back(nums[i]);
    }
    
    return result;
}