#include <vector>
using namespace std;

vector<int> cutVector(vector<int>& nums) {
    int minDiff = INT_MAX;
    int splitIndex = 0;
    
    for (int i = 1; i < nums.size(); i++) {
        int diff = abs(nums[i] - nums[i-1]);
        if (diff < minDiff) {
            minDiff = diff;
            splitIndex = i;
        }
    }
    
    vector<int> left = vector<int>(nums.begin(), nums.begin() + splitIndex);
    vector<int> right = vector<int>(nums.begin() + splitIndex, nums.end());
    
    return {left, right};
}