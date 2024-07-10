#include <vector>
#include <climits>
#include <algorithm>
#include <iostream>
using namespace std;

vector<int> findLeaders(const vector<int>& nums) {
    vector<int> leaders;
    int n = nums.size();
    int maxRight = INT_MIN;

    for (int i = n - 1; i >= 0; --i) {
        if (nums[i] >= maxRight) {
            maxRight = nums[i];
            leaders.push_back(nums[i]);
        }
    }

    reverse(leaders.begin(), leaders.end());
    return leaders;
}

int main() {
    vector<int> nums;
    int num;
    while (cin >> num) {
        nums.push_back(num);
    }

    vector<int> result = findLeaders(nums);

    for (int leader : result) {
        cout << leader << " ";
    }

    return 0;
}