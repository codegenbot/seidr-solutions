#include <vector>
using namespace std;

vector<int> leaders(vector<int>& nums) {
    vector<int> result;
    int rightmost = nums.back();
    for (int i = nums.size() - 2; i >= 0; --i) {
        if (nums[i] >= rightmost) {
            result.push_back(nums[i]);
            rightmost = nums[i];
        }
    }
    return result;
}