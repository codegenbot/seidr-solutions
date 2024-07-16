#include <vector>

vector<int> findLeaders(const vector<int>& nums) {
    vector<int> leaders;
    int n = nums.size();
    int maxRight = nums[n-1];
    leaders.push_back(maxRight);
    for (int i = n-2; i >= 0; --i) {
        if (nums[i] >= maxRight) {
            leaders.push_back(nums[i]);
            maxRight = nums[i];
        }
    }
    reverse(leaders.begin(), leaders.end());
    return leaders;
}