#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<int> findLeaders(vector<int> nums) {
    vector<int> leaders;
    int n = nums.size();
    int maxRight = nums[n-1];
    leaders.push_back(maxRight);
    for (int i = 0; i < n; i++) {
        if (nums[i] > maxRight) {
            maxRight = nums[i];
            leaders.push_back(maxRight);
        }
    }
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