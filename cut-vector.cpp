#include <vector>
using namespace std;

vector<int> cutVector(vector<int>& nums) {
    int minDiff = INT_MAX;
    int cutIndex = -1;
    
    for(int i = 0; i < nums.size() - 1; i++) {
        int diff = abs(nums[i] - nums[i+1]);
        
        if(diff <= minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }
    
    vector<int> left(nums.begin(), nums.begin()+cutIndex+1);
    vector<int> right(nums.begin()+cutIndex, nums.end());
    
    return {left, right};
}