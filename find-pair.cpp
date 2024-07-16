#include <vector>

using namespace std;

vector<pair<int, int>> findPair(vector<int>& nums, int target) {
    unordered_map<int, int> num_index;
    vector<pair<int, int>> result;
    
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (num_index.count(complement)) {
            result.push_back({complement, nums[i]});
        }
        num_index[nums[i]] = i;
    }
    
    return result;
}