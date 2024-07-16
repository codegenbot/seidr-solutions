#include <vector>
using namespace std;

vector<int> leaders(vector<int> nums) {
    vector<int> leaders;
    int rightmost = nums.back();
    for (int i = nums.size() - 2; i >= 0; i--) {
        if (nums[i] >= rightmost) {
            leaders.push_back(nums[i]);
            rightmost = nums[i];
        }
    }
    return leaders;
}