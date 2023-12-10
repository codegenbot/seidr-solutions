#include <vector>
#include <iostream>
#include <utility>
using namespace std;
pair<int, int> findPair(const vector<int>& nums, int target) {
    for (int i = 0; i < nums.size(); ++i) {
        for (int j = i + 1; j < nums.size(); ++j) {
            if (nums[i] + nums[j] == target) {
                return make_pair(nums[i], nums[j]);
            }
        }
    }
    return make_pair(-1, -1);
}