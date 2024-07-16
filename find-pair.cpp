#include <vector>
#include <algorithm>
using namespace std;

vector<int> findPair(vector<int>& nums, int target) {
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size() - 1; i++) {
        if (nums[i] + nums[i+1] == target) {
            return {nums[i], nums[i+1]};
        }
    }
    return {};
}