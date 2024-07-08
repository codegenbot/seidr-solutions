```cpp
#include <vector>
#include <iostream>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int>& nums) {
    int minDiff = INT_MAX;
    int pos = -1;
    for (int i = 0; i < nums.size() - 1; i++) {
        int diff = abs(nums[i] - nums[i + 1]);
        if (diff < minDiff) {
            minDiff = diff;
            pos = i;
        }
    }
    return {{nums.begin(), pos+1}, {pos, nums.end()}};
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (auto &num : nums) {
        cin >> num;
    }
    pair<vector<int>, vector<int>> result = cutVector(nums);
    cout << "[";
    for (int num : result.first) {
        cout << num << " ";
    }
    cout << "] [";
    for (int i = 0; i < result.second.size(); i++) {
        cout << result.second.at(i) << " ";
    }
    cout << "] ]" << endl;
    return 0;
}