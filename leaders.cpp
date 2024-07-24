#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<int> findLeaders(vector<int> nums) {
    vector<int> leaders;
    int n = nums.size();
    int maxRight = nums[n-1];
    leaders.push_back(maxRight);
    for (int i = n - 2; i >= 0; i--) {
        bool isLeader = true;
        for (int j = 0; j < leaders.size(); j++) {
            if (nums[i] < leaders[j]) {
                isLeader = false;
                break;
            }
        }
        if (isLeader) {
            leaders.push_back(nums[i]);
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
    vector<int> result = findLeaders(nums);
    for (int leader : result) {
        cout << leader << " ";
    }
    return 0;
}