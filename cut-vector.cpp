#include <vector>
using namespace std;

vector<int> cutVector(vector<int>& nums) {
    int min_diff = INT_MAX;
    int cut_index = -1;
    
    for (int i = 0; i < nums.size() - 1; i++) {
        int diff = abs(nums[i] - nums[i + 1]);
        if (diff <= min_diff) {
            min_diff = diff;
            cut_index = i;
        }
    }
    
    vector<int> left(nums.begin(), nums.begin() + cut_index);
    vector<int> right(nums.begin() + cut_index, nums.end());
    
    return {left, right};
}