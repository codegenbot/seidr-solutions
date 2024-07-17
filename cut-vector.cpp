#include <vector>
using namespace std;

vector<int> cutVector(vector<int>& nums) {
    int min_diff = INT_MAX;
    int cut_index = -1;
    
    for(int i = 0; i < nums.size() - 1; i++) {
        if(abs(nums[i] - nums[i+1]) <= min_diff) {
            min_diff = abs(nums[i] - nums[i+1]);
            cut_index = i;
        }
    }
    
    vector<int> left, right;
    for(int i = 0; i < cut_index; i++) {
        left.push_back(nums[i]);
    }
    for(int i = cut_index + 1; i < nums.size(); i++) {
        right.push_back(nums[i]);
    }
    
    return {left, right};
}