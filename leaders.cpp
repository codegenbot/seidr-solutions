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
    vector<int> nums = {969, 867, 838, 289, 554, 542, 867, 33, 482, 249, 218, 149, 969, 710, 267, 60, 485, 157, 451};
    vector<int> leaders = findLeaders(nums);

    for (int i = 0; i < leaders.size(); i++) {
        cout << leaders[i] << " ";
    }
    cout << endl;

    return 0;
}