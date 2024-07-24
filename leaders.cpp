#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

vector<int> findLeaders(vector<int> nums) {
    vector<int> leaders;
    int n = nums.size();
    leaders.push_back(nums[n - 1]);
    for (int i = n - 2; i >= 0; i--) {
        if (nums[i] > leaders.back()) {
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
    cin.ignore();
    vector<int> result = findLeaders(nums);
    for (int leader : result) {
        cout << leader << " ";
    }
    return 0;
}