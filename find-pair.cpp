#include <vector>
using namespace std;

vector<int> findPair(vector<int>& nums, int target) {
    unordered_map<int, int> numMap;
    for (int num : nums) {
        int complement = target - num;
        if (numMap.count(complement)) {
            return {complement, num};
        }
        numMap[num] = 1;
    }
    return {};
}