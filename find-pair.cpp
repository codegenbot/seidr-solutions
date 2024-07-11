#include <vector>
#include <map>

vector<int> findPair(vector<int>& nums, int target) {
    std::map<int, int> mp;
    std::vector<int> result;

    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (mp.find(complement) != mp.end()) {
            result.push_back(complement);
            result.push_back(nums[i]);
            break;
        }
        mp[nums[i]] = i;
    }

    return result;
}