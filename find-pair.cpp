#include <vector>
using namespace std;

pair<int, int> findPair(vector<int>& nums, int target) {
    unordered_map<int, int> numMap;
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (numMap.count(complement)) {
            return make_pair(nums[i], complement);
        }
        numMap[nums[i]] = i;
    }
    return make_pair(0, 0); // or throw an exception
}