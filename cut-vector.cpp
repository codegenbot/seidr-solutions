#include <vector>
using namespace std;

vector<int> cutVector(vector<int>& nums) {
    int minDiff = INT_MAX;
    int pos = -1;
    
    for(int i = 0; i < nums.size() - 1; i++) {
        int diff = abs(nums[i] - nums[i+1]);
        if(diff <= minDiff) {
            minDiff = diff;
            pos = i;
        }
    }
    
    vector<int> left, right;
    for(int i = 0; i < pos; i++) {
        left.push_back(nums[i]);
    }
    for(int i = pos + 1; i < nums.size(); i++) {
        right.push_back(nums[i]);
    }
    
    return {left, right};
}