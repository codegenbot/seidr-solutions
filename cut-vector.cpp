#include <vector>
using namespace std;

vector<int> cutVector(vector<int>& nums) {
    int minDiff = INT_MAX;
    int index = -1;
    
    for (int i = 0; i < nums.size() - 1; ++i) {
        if (abs(nums[i] - nums[i + 1]) <= minDiff) {
            minDiff = abs(nums[i] - nums[i + 1]);
            index = i;
        }
    }
    
    vector<int> left = {nums[0]};
    for (int i = 0; i < index; ++i) {
        left.push_back(nums[i + 1]);
    }
    
    vector<int> right = {nums[index + 1]};
    for (int i = index + 1; i < nums.size(); ++i) {
        right.push_back(nums[i]);
    }
    
    return {left, right};
}