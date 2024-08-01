#include <vector>
using namespace std;

vector<int> cutVector(vector<int>& nums) {
    int minDiff = INT_MAX;
    int index = -1;
    
    for(int i = 0; i < nums.size() - 1; i++) {
        if(abs(nums[i] - nums[i+1]) <= minDiff) {
            minDiff = abs(nums[i] - nums[i+1]);
            index = i;
        }
    }
    
    vector<int> left(nums.begin(), nums.begin()+index+1);
    vector<int> right(nums.begin()+index, nums.end());
    return {left, right};
}