#include <vector>
using namespace std;

vector<int> leaders(vector<int>& nums) {
    vector<int> leaders;
    int leader = INT_MIN;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] > leader) {
            leaders.push_back(nums[i]);
            leader = nums[i];
        }
    }
    return leaders;
}