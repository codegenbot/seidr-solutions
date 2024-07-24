#include <vector>
#include <algorithm>
#include <iostream>
#include <climits>
using namespace std;

vector<int> findLeaders(vector<int> nums) {
    vector<int> leaders;
    int n = nums.size();
    int maxLeft = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (nums[i] >= maxLeft) {
            maxLeft = nums[i];
            leaders.push_back(maxLeft);
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
    cin.ignore();
    vector<int> result = findLeaders(nums);
    for (int leader : result) {
        cout << leader << " ";
    }
    return 0;
}