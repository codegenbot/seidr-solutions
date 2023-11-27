#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>
#include <iterator>
#include <valarray>

vector<vector<int>> cutVector(vector<int>& nums) {
    int n = nums.size();
    int leftSum = 0, rightSum = 0;

    for (int i = 0; i < n; i++) {
        rightSum += nums[i];
    }

    int diff = numeric_limits<int>::max(), cutIndex = -1;
    for (int i = 0; i < n; i++) {
        leftSum += nums[i];
        rightSum -= nums[i];

        int currentDiff = abs(leftSum - rightSum);
        if (currentDiff < diff) {
            diff = currentDiff;
            cutIndex = i;
        }
    }

    vector<int> leftSubvector(nums.begin(), nums.begin() + cutIndex + 1);
    vector<int> rightSubvector(nums.begin() + cutIndex + 1, nums.end());

    return vector<vector<int>>{leftSubvector, rightSubvector};
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
  
    auto result = cutVector(nums);

    for (auto& subvector : result) {
        for (auto& it2 : subvector) {
            cout << it2 << " ";
        }
    }

    return 0;
}