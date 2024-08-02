#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

vector<int> findLeaders(const vector<int>& nums) {
    vector<int> leaders;
    int maxRight = INT_MIN;
    for (int i = nums.size() - 1; i >= 0; --i) {
        if (nums[i] >= maxRight) {
            leaders.push_back(nums[i]);
            maxRight = nums[i];
        }
    }
    reverse(leaders.begin(), leaders.end());
    return leaders;
}

int main() {
    vector<int> nums = {5, 3, 9, 2, 7, 6};
    vector<int> result = findLeaders(nums);
    for (int num : result) {
        cout << num << " ";
    }
    return 0;
}