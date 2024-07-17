#include <vector>
using namespace std;

pair<int,int> findPair(vector<int>& nums, int target) {
    unordered_map<int,int> numMap;
    for(int i=0; i<nums.size(); i++) {
        int complement = target - nums[i];
        if(numMap.find(complement) != numMap.end()) {
            return pair<int,int>(complement, nums[i]);
        }
        numMap[nums[i]] = i;
    }
    return pair<int,int>(-1,-1);
}