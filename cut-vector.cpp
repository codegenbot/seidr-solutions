#include <vector>
#include <climits>
#include <cmath>

using namespace std;

vector<vector<int>> cutVector(vector<int>& nums) {
    int minDiff = INT_MAX;
    int pos = -1;
    
    for(int i=0; i<nums.size()-1; ++i++) {
        int diff = abs(nums[i] - nums[i+1]);
        if(diff < minDiff) {
            minDiff = diff;
            pos = i;
        }
    }
    
    vector<int> left, right;
    left.assign(nums.begin(), nums.begin()+pos);
    right.assign(nums.begin()+pos, nums.end());
    
    return {{left},{right}};
}