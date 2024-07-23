#include <vector>
using namespace std;

vector<int> cutVector(vector<int>& nums) {
    int n = nums.size();
    int minDiff = INT_MAX;
    int index = 0;
    
    for (int i = 1; i <= n; i++) {
        if (i == n || nums[i] != nums[0]) {
            int diff = abs(nums[i-1] - nums[0]);
            if (diff < minDiff) {
                minDiff = diff;
                index = i;
            }
        }
    }
    
    return {vector<int>(nums.begin(), nums.begin() + index), vector<int>(nums.begin() + index, nums.end())};
}