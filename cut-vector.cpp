#include <vector>
#include <climits>
#include <cmath>
using namespace std;

vector<int> cutVector(vector<int>& nums) {
    int minDiff = INT_MAX;
    int splitIndex = 0;
    
    for(int i = 1; i < nums.size(); i++) {
        int diff = abs(nums[i] - nums[i-1]);
        if(diff <= minDiff) {
            minDiff = diff;
            splitIndex = i;
        }
    }
    
    vector<int> left = {nums[0]};
    for(int i = 1; i < splitIndex; i++) {
        left.push_back(nums[i]);
    }
    
    vector<int> right = {nums[splitIndex], nums.back()};
    for(int i = splitIndex + 1; i < nums.size() - 1; i++) {
        right.push_back(nums[i]);
    }
    
    return {{left}, {right}};
}