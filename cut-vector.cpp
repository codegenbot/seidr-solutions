#include <vector>
using namespace std;

vector<int> cutVector(vector<int> nums) {
    int n = nums.size();
    int diff = INT_MAX;
    int index = 0;
    
    for (int i = 0; i < n-1; i++) {
        int leftSum = 0;
        int rightSum = 0;
        
        for (int j = 0; j <= i; j++) {
            leftSum += nums[j];
        }
        
        for (int j = i+1; j < n; j++) {
            rightSum += nums[j];
        }
        
        int currentDiff = abs(leftSum - rightSum);
        
        if (currentDiff < diff) {
            diff = currentDiff;
            index = i+1;
        }
    }
    
    vector<int> left(nums.begin(), nums.begin() + index);
    vector<int> right(nums.begin() + index, nums.end());
    
    left.push_back(0);
    right.push_back(0);
    
    return {left, right};
}