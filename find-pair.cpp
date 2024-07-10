#include <vector>
#include <unordered_map>
#include <stdexcept>

using namespace std;
using namespace std::unordered_map; // Add this line

pair<int, int> findPair(const vector<int>& nums, int target) {
    unordered_map<int, int> numMap;
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (numMap.find(complement) != numMap.end()) {
            return {complement, nums[i]};
        }
        numMap[nums[i]] = i;
    }
    throw out_of_range("No pair found");
}