#include <vector>
#include <unordered_map>
#include <utility>

using namespace std;

std::pair<int, int> findPair(vector<int>& nums, int target) {
    unordered_map<int, int> numMap;
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (numMap.count(complement)) {
            return make_pair(complement, nums[i]);
        }
        numMap[nums[i]] = i;
    }
    return make_pair(-1, -1);
}