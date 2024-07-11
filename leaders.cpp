#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> findLeaders(vector<int> nums) {
    vector<int> leaders;
    int n = nums.size();
    int maxRight = nums[n - 1];
    leaders.push_back(maxRight);
    for (int i = n - 2; i >= 0; i--) {
        if (nums[i] >= maxRight) {
            maxRight = nums[i];
            leaders.push_back(maxRight);
        }
    }
    reverse(leaders.begin(), leaders.end());
    return leaders;
}

int main() {
    vector<int> nums = {5, 3, 20, 15, 8, 3};
    vector<int> result = findLeaders(nums);
    for (int num : result) {
        cout << num << " ";
    }
    return 0;
}