#include <vector>
#include <iostream>

using namespace std;

vector<int> leaders(const vector<int>& nums) {
    if (nums.empty()) return {};
    vector<int> leaders;
    int leader = nums[0];
    for (int i = 1; i < nums.size(); i++) {
        if (leader >= nums[i]) {
            leaders.push_back(leader);
            leader = nums[i];
        } else {
            leader = max(leader, nums[i]);
        }
    }
    leaders.push_back(leader);
    return leaders;
}

int main() {
    vector<int> nums = {10, 5, 20, 40, 30};
    vector<int> result = leaders(nums);
    for (int i : result) {
        cout << i << " ";
    }
    return 0;
}