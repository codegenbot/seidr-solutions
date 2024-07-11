#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

vector<int> findLeaders(const vector<int>& nums) {
    vector<int> leaders;
    int n = nums.size();

    for (int i = n - 1; i >= 0; --i) {
        if (leaders.empty() || nums[i] >= leaders.back()) {
            leaders.push_back(nums[i]);
        }
    }

    reverse(leaders.begin(), leaders.end());
    return leaders;
}