#include <vector>
using namespace std;

vector<int> leaders(vector<int>& nums) {
    vector<int> result;
    int maxRight = nums.back();
    for (int i = nums.size() - 2; i >= 0; --i) {
        if (nums[i] >= maxRight) {
            maxRight = nums[i];
            result.push_back(nums[i]);
        }
    }
    return result;
}