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
        int diff = abs(std::accumulate(nums.begin(), nums.begin() + i, 0) - std::accumulate(nums.begin() + i, nums.end(), 0));
        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }

    return {vector<int>(nums.begin(), nums.begin() + cutIndex + 1), vector<int>(nums.begin() + cutIndex + 1, nums.end())};
}

int main() {
    vector<int> nums = {3, 1, 4, 1, 5, 9, 2, 6, 5};
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