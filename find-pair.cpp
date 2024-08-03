#include <vector>
using namespace std;

vector<int> findPair(vector<int>& nums, int target) {
    unordered_map<int,int> numToIndex;
    
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        
        if (numToIndex.find(complement) != numToIndex.end()) {
            return {complement, nums[i]};
        }
        
        numToIndex[nums[i]] = i;
    }
    
    return {};
}