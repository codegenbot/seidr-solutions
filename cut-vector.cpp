#include <vector>
using namespace std;

vector<int> cutVector(vector<int>& nums) {
    int minDiff = INT_MAX;
    int splitIndex = -1;
    
    for(int i = 0; i < nums.size() - 1; i++) {
        int diff = abs(nums[i] - nums[i+1]);
        if(diff <= minDiff) {
            minDiff = diff;
            splitIndex = i;
        }
    }
    
    vector<int> left, right;
    left.assign(nums.begin(), nums.begin() + splitIndex);
    right.assign(nums.begin() + splitIndex, nums.end());
    
    return {left, right};
}