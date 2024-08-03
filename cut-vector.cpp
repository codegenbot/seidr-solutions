#include <vector>
using namespace std;

vector<int> cutVector(vector<int>& nums) {
    int minDiff = INT_MAX;
    int idx = -1;
    
    for (int i = 0; i < nums.size() - 1; i++) {
        if (abs(nums[i] - nums[i + 1]) <= minDiff) {
            minDiff = abs(nums[i] - nums[i + 1]);
            idx = i;
        }
    }
    
    vector<int> left, right;
    
    for (int i = 0; i < idx; i++) {
        left.push_back(nums[i]);
    }
    
    for (int i = idx; i <= nums.size() - 1; i++) {
        right.push_back(nums[i]);
    }
    
    return {left, right};
}