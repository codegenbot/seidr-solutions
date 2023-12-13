```cpp
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

pair<vector<int>, vector<int>> cutVector(const vector<int>& nums) {
    int n = nums.size();
    int leftSum = nums[0];
    int rightSum = 0;
    for (int i = 0; i < n; i++) {
        rightSum += nums[i];
    }
    int minDiff = abs(leftSum - rightSum);
    int cutIndex = 0;

    for (int i = 0; i < n; i++) {
        if (i > 0) {
            leftSum += nums[i];
            rightSum -= nums[i];
            int diff = abs(leftSum - rightSum);
            if (diff < minDiff) {
                minDiff = diff;
                cutIndex = i;
            }
        }
    }

    vector<int> leftSubvector(nums.begin(), nums.begin() + cutIndex + 1);
    vector<int> rightSubvector(nums.begin() + cutIndex + 1, nums.end());

    return make_pair(leftSubvector, rightSubvector);
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    pair<vector<int>, vector<int>> result = cutVector(nums);
    vector<int> leftSubvector = result.first;
    vector<int> rightSubvector = result.second;

    cout << "Left Subvector: ";
    for (int num : leftSubvector) {
        cout << num << " ";
    }
    cout << endl;

    cout << "Right Subvector: ";
    for (int num : rightSubvector) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
```