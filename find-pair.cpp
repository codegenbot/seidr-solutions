#include <vector>
using namespace std;

vector<int> findPair(vector<int>& nums, int target) {
    unordered_map<int, int> numToIndex;
    
    vector<int> result;
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (numToIndex.count(complement)) {
            result.push_back(nums[i]);
            result.push_back(complement);
            return result;
        }
        numToIndex[nums[i]] = i;
    }
    
    return vector<int>(); // or handle this situation as you like
}