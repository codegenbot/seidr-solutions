#include <iostream>
#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int>& nums) {
    int n = nums.size();
    int diff = INT_MAX;
    int index = -1;

    // Find the index where the difference between the sums of the two subvectors is minimal
    for (int i = 1; i < n; i++) {
        int sum1 = 0, sum2 = 0;
        for (int j = 0; j < i; j++) {
            sum1 += nums[j];
        }
        for (int j = i; j < n; j++) {
            sum2 += nums[j];
        }
        int currDiff = abs(sum1 - sum2);
        if (currDiff < diff) {
            diff = currDiff;
            index = i;
        }
    }

    // Create the two subvectors
    vector<int> subvector1(nums.begin(), nums.begin() + index);
    vector<int> subvector2(nums.begin() + index, nums.end());

    return make_pair(subvector1, subvector2);
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    pair<vector<int>, vector<int>> result = cutVector(nums);

    for (int num : result.first) {
        cout << num << endl;
    }

    for (int num : result.second) {
        cout << num << endl;
    }

    return 0;
}