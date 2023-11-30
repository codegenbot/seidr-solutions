#include <vector>
#include <iostream>
#include <climits>
#include <algorithm>

using namespace std;

pair<vector<int>, vector<int>> cutVector(const vector<int>& nums) {
    int n = nums.size();
    int diff = abs(nums[0] - nums[n-1]);
    int index = -1;

    vector<int> prefixSum(n+1, 0);
    for (int i = 0; i < n; i++) {
        prefixSum[i+1] = prefixSum[i] + nums[i];
    }

    for (int i = 0; i < n; i++) {
        int leftSum = prefixSum[i];
        int rightSum = prefixSum[n] - prefixSum[i+1];

        int currentDiff = abs(leftSum - rightSum);

        if (currentDiff < diff) {
            diff = currentDiff;
            index = i;
        }
    }

    if (index == -1) return make_pair(nums, vector<int>());

    return make_pair(
        vector<int>(nums.begin(), nums.begin() + index + 1),
        vector<int>(nums.begin() + index + 1, nums.end())
    );
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    pair<vector<int>, vector<int>> subvectors = cutVector(nums);

    copy(subvectors.first.begin(), subvectors.first.end(), ostream_iterator<int>(cout, " "));
    cout << endl;

    copy(subvectors.second.begin(), subvectors.second.end(), ostream_iterator<int>(cout, " "));
    cout << endl;

    return 0;
}