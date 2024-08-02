#include <vector>
using namespace std;

pair<int, int> findPair(vector<int>& nums, int target) {
    unordered_map<int, int> numMap;
    for (int num : nums) {
        int complement = target - num;
        if (numMap.find(complement) != numMap.end()) {
            return make_pair(num, complement);
        }
        numMap[num] = 1;
    }
    return make_pair(0, 0); // or throw an exception
}