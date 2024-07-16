#include <vector>
#include <climits>
#include <iostream>

using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int>& nums) {
    int minDiff = INT_MAX;
    int cutIndex = 0;
    for (int i = 1; i < nums.size(); i++) {
        int diff = std::abs(nums[i] - nums[i-1]);
        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }
    return {{nums.begin(), nums.begin() + cutIndex}, {nums.begin() + cutIndex, nums.end()}};
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    pair<vector<int>, vector<int>> result = cutVector(nums);
    cout << "[";
    for (int i = 0; i < result.first.size(); i++) {
        cout << result.first[i];
        if (i < result.first.size() - 1) {
            cout << ", ";
        }
    }
    cout << "]\n[";
    for (int i = 0; i < result.second.size(); i++) {
        cout << result.second[i];
        if (i < result.second.size() - 1) {
            cout << ", ";
        }
    }
    cout << "]\n0\n";
    return 0;
}