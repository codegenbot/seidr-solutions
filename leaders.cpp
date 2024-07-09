#include <vector>
vector<int> findLeaders(vector<int> nums) {
    vector<int> leaders;
    int n = nums.size();

    int maxRight = INT_MIN;
    for (int i = n - 1; i >= 0; i--) {
        if (nums[i] >= maxRight) {
            maxRight = nums[i]; // Update maxRight to the current element
            leaders.push_back(nums[i]);
        }
    }

    reverse(leaders.begin(), leaders.end());

    return leaders;
}