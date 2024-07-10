#include <vector>
using namespace std;

vector<int> cutVector(vector<int>& nums) {
    int minDiff = INT_MAX;
    int splitIndex = 0;
    
    for(int i = 1; i <= nums.size(); i++) {
        int leftSum = 0, rightSum = 0;
        
        if(i < nums.size()) {
            leftSum = accumulate(nums.begin(), nums.begin() + i, 0);
            rightSum = accumulate(nums.begin() + i, nums.end(), 0);
        } else {
            leftSum = accumulate(nums.begin(), nums.end(), 0);
        }
        
        int diff = abs(leftSum - rightSum);
        if(diff < minDiff) {
            minDiff = diff;
            splitIndex = i;
        }
    }
    
    vector<int> leftVec(nums.begin(), nums.begin() + splitIndex);
    vector<int> rightVec(splitIndex == 0 ? nums : nums.begin() + splitIndex);
    
    return {leftVec, rightVec};
}