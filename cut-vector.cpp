#include <vector>
#include <iostream>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int>& nums) {
    int n = nums.size();
    int diff = INT_MAX;
    int idx = -1;

    for (int i = 0; i < n - 1; i++) {
        int sum1 = 0, sum2 = 0;
        for (int j = 0; j <= i; j++) {
            sum1 += nums[j];
        }
        for (int j = i + 1; j < n; j++) {
            sum2 += nums[j];
        }
        int currDiff = abs(sum1 - sum2);
        if (currDiff < diff) {
            diff = currDiff;
            idx = i;
        }
    }

    vector<int> sub1, sub2;
    for (int i = 0; i <= idx; i++) {
        sub1.push_back(nums[i]);
    }
    for (int i = idx + 1; i < n; i++) {
        sub2.push_back(nums[i]);
    }

    return make_pair(sub1, sub2);
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