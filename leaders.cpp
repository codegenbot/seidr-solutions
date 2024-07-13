#include <vector>
using namespace std;

vector<int> leaders(vector<int>& nums) {
    vector<int> res;
    int n = nums.size();
    for (int i = n - 1; i >= 0; --i) {
        if (nums[i] >= nums.back()) {
            res.push_back(nums[i]);
        }
    }
    return res;
}