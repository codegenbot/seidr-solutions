#include <vector>
#include <climits>
#include <iostream>

using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> nums) {
    int minDiff = abs(nums[1] - nums[0]);
    int cutIndex = 0;
    
    for (int i = 2; i < nums.size(); ++i) {
        if (abs(nums[i] - nums[0]) >= minDiff) {
            break;
        }
        if (abs(nums[i] - nums[0]) < minDiff) {
            minDiff = abs(nums[i] - nums[0]);
            cutIndex = i;
        }
    }
    
    return {{nums.begin(), nums.begin() + cutIndex}, {nums.begin() + cutIndex, nums.end()}};
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    pair<vector<int>, vector<int>> result = cutVector(nums);
    cout << "[";
    for (int num : result.first) {
        cout << num << " ";
    }
    cout << "] [" << "[";
    for (int num : result.second) {
        cout << num << " ";
    }
    cout << "]";
    return 0;
}