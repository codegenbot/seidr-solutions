#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> nums) {
    int n = nums.size();
    vector<vector<int>> result;
    
    for(int i = 0; i < n - 1; i++) {
        if(nums[i] == nums[i+1]) {
            result.push_back({nums[i]});
            result.push_back({nums[i]});
            return result;
        }
    }
    
    int min_diff = INT_MAX, cut_index = -1;
    for(int i = 0; i < n - 1; i++) {
        if(abs(nums[i] - nums[i+1]) < min_diff) {
            min_diff = abs(nums[i] - nums[i+1]);
            cut_index = i;
        }
    }
    
    result.push_back({nums[0], nums[cut_index]});
    result.push_back({nums[cut_index + 1], nums.back()});
    return result;
}