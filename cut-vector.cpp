#include <vector>
using namespace std;

vector<int> cutVector(vector<int>& nums) {
    int minDiff = INT_MAX;
    int splitIndex = 0;
    
    for (int i = 1; i < nums.size(); ++i) {
        int diff = abs(nums[i] - nums[0]);
        if (diff < minDiff) {
            minDiff = diff;
            splitIndex = i;
        }
    }
    
    return {vector<int>(nums.begin(), nums.begin() + splitIndex), vector<int>(nums.begin() + splitIndex, nums.end())};
}