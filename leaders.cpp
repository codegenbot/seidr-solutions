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
    vector<int> nums;
    int num;
    while (cin >> num) {
        nums.push_back(num);
    }

    vector<int> result = findLeaders(nums);
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    return 0;
}