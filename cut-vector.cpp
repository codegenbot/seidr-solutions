#include <vector>
using namespace std;

vector<int> cutVector(vector<int>& nums) {
    int minDiff = INT_MAX;
    int cutIndex = 0;
    
    for(int i = 1; i < nums.size(); i++) {
        if(abs(nums[i] - nums[0]) <= minDiff) {
            minDiff = abs(nums[i] - nums[0]);
            cutIndex = i;
        }
    }
    
    return {vector<int>(nums.begin(), nums.begin() + cutIndex), vector<int>(nums.begin() + cutIndex, nums.end())};
}