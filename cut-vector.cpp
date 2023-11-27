#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>
#include <iterator>

using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int>& nums) {
    int n = nums.size();
    int leftSum = 0, rightSum = 0;

    for (int i = 0; i < n-1; i++) {
        rightSum += nums[i];
    }

    int diff = numeric_limits<int>::max(), cutIndex = -1;
    for (int i = 0; i < n-1; i++) {
        leftSum += nums[i];
        rightSum -= nums[i];

        int currentDiff = abs(leftSum - rightSum);
        if (currentDiff < diff) {
            diff = currentDiff;
            cutIndex = i;
        }
    }

    vector<int> leftSubvector(nums.begin(), nums.begin() + cutIndex + 2);
    vector<int> rightSubvector(nums.begin() + cutIndex + 2, nums.end());

    return make_pair(leftSubvector, rightSubvector);
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    auto result = cutVector(nums);
    auto& leftResult = result.first;
    auto& rightResult = result.second;

    for (const auto& element : leftResult) {
        cout << element << " ";
    }

    cout << endl;

    for (const auto& element : rightResult) {
        cout << element << " ";
    }

    return 0;
}