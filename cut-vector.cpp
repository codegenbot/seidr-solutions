#include <vector>
using namespace std;

vector<int> cutVector(vector<int>& nums) {
    int minDiff = INT_MAX;
    int index = -1;
    vector<int> resultLeft, resultRight;
    
    for(int i=0; i<nums.size()-1; i++) {
        int diff = abs(nums[i] - nums[i+1]);
        if(diff <= minDiff) {
            minDiff = diff;
            index = i;
        }
    }
    
    vector<int> leftVec;
    for(auto i:nums.begin(); i!=nums.begin()+index+1; i++) {
        leftVec.push_back(*i);
    }
    vector<int> rightVec(nums.begin()+index+1, nums.end());
    
    return {leftVec, rightVec};
}