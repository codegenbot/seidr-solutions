#include <iostream>
#include <vector>
#include <climits>
#include <numeric>

using namespace std;

pair<vector<int>, vector<int>> cutVector(const vector<int>& nums) {
    int n = nums.size();
    int cutIndex = 0;
    int minDiff = INT_MAX;

    for (int i = 1; i < n; i++) {
        int leftSum = std::accumulate(nums.begin(), nums.begin() + i, 0);
        int rightSum = std::accumulate(nums.begin() + i, nums.end(), 0);
        int diff = abs(leftSum - rightSum);
        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }

    return {vector<int>(nums.begin(), nums.begin() + cutIndex),
            vector<int>(nums.begin() + cutIndex, nums.end())};
}

int main() {
    vector<int> nums = {1103, 4056, 5573, 2048, 5391, 5328, 7793, 340, 141, 4084, 7418, 4438, 1508, 140, 1780, 2647, 5360, 7719, 3517, 4427};
    auto result = cutVector(nums);

    for (int num : result.first) {
        cout << num << ' ';
    }
    cout << endl;
    for (int num : result.second) {
        cout << num << ' ';
    }

    return 0;
}