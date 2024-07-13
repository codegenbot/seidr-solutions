#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int>& nums) {
    int min_diff = INT_MAX;
    int cut_index = 0;
    
    for(int i = 1; i <= nums.size(); i++) {
        if(i == nums.size() || nums[i-1] != nums[i]) {
            int diff = abs((i - (nums.size() - i)) * (nums[0] - nums.back()));
            if(diff < min_diff) {
                min_diff = diff;
                cut_index = i;
            }
        }
    }
    
    vector<vector<int>> result(2);
    for(int i = 0; i < cut_index; i++) {
        result[0].push_back(nums[i]);
    }
    for(int i = cut_index; i < nums.size(); i++) {
        result[1].push_back(nums[i]);
    }
    
    return result;
}