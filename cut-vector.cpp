#include <vector>
#include <cmath>
#include <cllimits>
using namespace std;

vector<vector<int>> cutVector(vector<int> &nums) {
    int n = nums.size();
    vector<vector<int>> res(2);

    for (int i = 0; i < n - 1; i++) {
        int diff = abs(nums[i] - nums[i + 1]);
        if ((i == 0 || nums[0] == nums[i]) && (n - 2 == i || nums[n - 1] == nums[i])) {
            res[0].clear();
            for (int j = 0; j <= i; j++) {
                res[0].push_back(nums[j]);
            }
            res[1].clear();
            for (int j = i + 1; j < n; j++) {
                res[1].push_back(nums[j]);
            }
        } else if (diff == 0) {
            res[0].clear();
            for (int j = 0; j <= i; j++) {
                res[0].push_back(nums[j]);
            }
            res[1].clear();
            for (int j = i + 1; j < n; j++) {
                res[1].push_back(nums[j]);
            }
        } else if ((i == 0 || nums[0] - nums[i] <= diff) && (n - 2 == i || nums[n - 1] - nums[i] <= diff)) {
            res[0].clear();
            for (int j = 0; j <= i; j++) {
                res[0].push_back(nums[j]);
            }
            res[1].clear();
            for (int j = i + 1; j < n; j++) {
                res[1].push_back(nums[j]);
            }
        } else if ((i == 0 || nums[i] - nums[0] <= diff) && (n - 2 == i || nums[n - 1] - nums[i] <= diff)) {
            res[0].clear();
            for (int j = 0; j < i; j++) {
                res[0].push_back(nums[j]);
            }
            res[1].clear();
            for (int j = i; j < n; j++) {
                res[1].push_back(nums[j]);
            }
        } else {
            int minDiff = INT_MAX;
            int pos = -1;
            for (int i2 = 0; i2 < n - 1; i2++) {
                int diff2 = abs(nums[i2] - nums[i2 + 1]);
                if (diff2 < minDiff) {
                    minDiff = diff2;
                    pos = i2;
                }
            }
            res[0].clear();
            for (int j = 0; j <= pos; j++) {
                res[0].push_back(nums[j]);
            }
            res[1].clear();
            for (int j = pos + 1; j < n; j++) {
                res[1].push_back(nums[j]);
            }
        }
    }

    return res;
}