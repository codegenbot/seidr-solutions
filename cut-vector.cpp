#include <vector>
using namespace std;

vector<int> cutVector(vector<int>& nums) {
    int n = nums.size();
    int minDiff = INT_MAX;
    int cutIndex = 0;
    
    for (int i = 1; i < n; ++i) {
        int diff = abs(nums[i] - nums[i-1]);
        if (diff <= minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }
    
    return {nums.substr(0, cutIndex).c_str(), nums.substr(cutIndex+1).c_str()};
}