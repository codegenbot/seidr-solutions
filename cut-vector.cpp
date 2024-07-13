#include <iostream>
#include <vector>
#include <numeric>
#include <climits>

using namespace std;

pair<vector<int>, vector<int>> cutVector(const vector<int>& nums) {
    int n = nums.size();
    int diff = INT_MAX;
    int cutIndex = 0;

    for (int i = 1; i < n; i++) {
        int leftSum = accumulate(nums.begin(), nums.begin() + i, 0);
        int rightSum = accumulate(nums.begin() + i, nums.end(), 0);

        if (abs(leftSum - rightSum) < diff) {
            diff = abs(leftSum - rightSum);
            cutIndex = i;
        }
    }

    vector<int> firstSubvector(nums.begin(), nums.begin() + cutIndex);
    vector<int> secondSubvector(nums.begin() + cutIndex, nums.end());

    return make_pair(firstSubvector, secondSubvector);
}

int main() {
    vector<int> nums = {6310, 2545, 5656, 5646};
    auto result = cutVector(nums);

    for (int num : result.first) cout << num << " ";
    cout << endl;

    for (int num : result.second) cout << num << " ";
    cout << endl;

    return 0;
}