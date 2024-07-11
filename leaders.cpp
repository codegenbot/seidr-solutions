#include <vector>

vector<int> findLeaders(vector<int> nums) {
    vector<int> leaders;
    int n = nums.size();
    int leader = nums[n - 1];
    leaders.push_back(leader);
    for (int i = n - 2; i >= 0; i--) {
        if (nums[i] >= leader) {
            leader = nums[i];
            leaders.push_back(leader);
        }
    }
    reverse(leaders.begin(), leaders.end());
    return leaders;
}