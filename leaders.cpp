#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> findLeaders(vector<int> nums) {
    if (nums.empty()) {
        return {};
    }

    vector<int> leaders;
    int n = nums.size();
    int maxRight = nums[n-1];
    leaders.push_back(maxRight);
    for (int i = n-2; i >= 0; i--) {
        if (nums[i] >= maxRight) {
            maxRight = nums[i];
            leaders.push_back(maxRight);
        }
    }
    leaders.push_back(nums[n-1]); // Include the rightmost element unconditionally
    reverse(leaders.begin(), leaders.end());
    return leaders;
}

int main() {
    vector<int> nums;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        nums.push_back(num);
    }

    vector<int> leaders = findLeaders(nums);

    for (int leader : leaders) {
        cout << leader << " ";
    }
    cout << endl;

    return 0;
}