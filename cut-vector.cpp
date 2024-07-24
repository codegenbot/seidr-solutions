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
    int cutIndex = 0;

    for (int i = 1; i < n; i++) {
        int leftSum = std::accumulate(nums.begin(), nums.begin() + i, 0);
        int rightSum = std::accumulate(nums.begin() + i, nums.end(), 0);
        if (leftSum == rightSum) {
            cutIndex = i;
            break;
        }
    }

    return {vector<int>(nums.begin(), nums.begin() + cutIndex), vector<int>(nums.begin() + cutIndex, nums.end())};
}