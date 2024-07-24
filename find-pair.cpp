#include <vector>
using namespace std;

pair<int, int> findPair(vector<int>& nums, int target) {
    unordered_map<int, int> numIndex;
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (numIndex.count(complement)) {
            return {complement, nums[i]};
        }
        numIndex[nums[i]] = i;
    }
    return {}; // or throw an exception if no pair found
}