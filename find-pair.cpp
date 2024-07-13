#include <vector>
#include <unordered_map>
#include <utility>

using namespace std;

pair<int, int> findPair(vector<int>& nums, int target) {
    unordered_map<int, int> numIndex;
    for (int i = 0; i < nums.size(); ++i) {
        int complement = target - nums[i];
        if (numIndex.count(complement)) {
            return pair<int, int>(min(nums[i], complement), max(nums[i], complement));
        }
        numIndex[nums[i]] = i;
    }
    return {};
}