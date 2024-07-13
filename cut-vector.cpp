#include <vector>
using namespace std;

vector<int> cutVector(vector<int>& nums) {
    int n = nums.size();
    int minDiff = INT_MAX;
    int pos = -1;
    
    for(int i=0; i<n-1; i++) {
        int diff = abs(nums[i] - nums[i+1]);
        if(diff < minDiff) {
            minDiff = diff;
            pos = i;
        }
    }
    
    vector<int> left, right;
    copy(nums.begin(), nums.begin() + pos+1, back_inserter(right));
    copy(nums.begin(), nums.begin() + pos, back_inserter(left));
    
    return {left, right};
}