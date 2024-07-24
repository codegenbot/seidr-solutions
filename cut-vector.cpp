#include <iostream>
#include <vector>
#include <climits>
#include <numeric>

using namespace std;

pair<vector<int>, vector<int>> cutVector(const vector<int>& nums);

int main() {
    vector<int> nums = {3, 1, 1, 2, 2, 1};
    auto result = cutVector(nums);

    cout << "Left Subvector: ";
    for (int num : result.first) {
        cout << num << " ";
    }
    cout << endl;

    cout << "Right Subvector: ";
    for (int num : result.second) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

pair<vector<int>, vector<int>> cutVector(const vector<int>& nums) {
    int n = nums.size();
    int totalSum = std::accumulate(nums.begin(), nums.end(), 0);
    int leftSum = 0;
    int cutIndex = -1;
    int minDiff = INT_MAX;

    for (int i = 0; i < n; i++) {
        leftSum += nums[i];
        int rightSum = totalSum - leftSum;
        int currentDiff = abs(leftSum - rightSum);

        if (currentDiff < minDiff) {
            minDiff = currentDiff;
            cutIndex = i;
        }
    }

    return {vector<int>(nums.begin(), nums.begin() + cutIndex + 1), 
            vector<int>(nums.begin() + cutIndex + 1, nums.end())};
}