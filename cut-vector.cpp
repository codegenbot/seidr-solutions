#include <iostream>
#include <vector>
#include <climits>

using namespace std;

pair<vector<int>, vector<int>> cutVector(const vector<int>& nums) {
    int n = nums.size();
    int cutIndex = 0;
    int minDiff = INT_MAX;

    for (int i = 0; i < n; i++) {
        int sum1 = 0;
        int sum2 = 0;
        for (int j = 0; j < n; j++) {
            if (j < i) {
                sum1 += nums[j];
            } else {
                sum2 += nums[j];
            }
        }
        int diff = abs(sum1 - sum2);
        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }

    return {vector<int>(nums.begin(), nums.begin() + cutIndex), vector<int>(nums.begin() + cutIndex, nums.end())};
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