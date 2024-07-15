#include <vector>
#include <unordered_map>

using namespace std;

vector<int> findPair(vector<int>& nums, int target) {
    unordered_map<int, int> numMap;
    vector<int> result; // Changed here
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (numMap.find(complement) != numMap.end()) {
            return {complement, nums[i]} ; // Added a semicolon here
        }
        numMap[nums[i]] = i;
    }
    return result; // Replaced with this line
}