#include <vector>
#include <algorithm>
#include <iostream>
#include <climits>
using namespace std;

vector<int> findLeaders(vector<int> nums) {
    vector<int> leaders;
    int n = nums.size();
    int maxRight = INT_MIN;
    for (int i = n - 1; i >= 0; i--) {
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
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num;
        nums.push_back(num);
    }
    cin.ignore();
    vector<int> result = findLeaders(nums);
    for (int leader : result) {
        cout << leader << " ";
    }
    return 0;
}