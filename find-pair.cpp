```cpp
#include <vector>
#include <unordered_map>

using namespace std;

pair<int, int> findPair(const vector<int>& nums, int target) {
    unordered_map<int, int> numMap;
    numMap = unordered_map<int, int>();
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (numMap.find(complement) != numMap.end()) {
            return {complement, nums[i]};
        }
        numMap[nums[i]] = i;
    }
    throw std::invalid_argument("No pair found");
    return {};
}