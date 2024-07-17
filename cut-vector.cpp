#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> nums) {
    int n = nums.size();
    vector<vector<int>> res;
    
    for (int i = 0; i < n; ++i) {
        if (i == 0 || nums[i] != nums[0]) {
            int leftSum = 0, rightSum = 0;
            for (int j = 0; j <= i; ++j) {
                leftSum += nums[j];
            }
            for (int j = i + 1; j < n; ++j) {
                rightSum += nums[j];
            }
            if (leftSum == rightSum) {
                res.push_back({nums.begin(), nums.begin() + i + 1});
                res.push_back({nums.begin() + i + 1, nums.end()});
                return res;
            } else if (i > 0 && leftSum >= rightSum) {
                res.push_back({nums.begin(), nums.begin() + i});
                res.push_back({nums.begin() + i, nums.end()});
                return res;
            }
        }
    }
    
    vector<int> firstHalf = {nums[0]};
    for (int i = 1; i < n - 1; ++i) {
        if (nums[i] <= nums[i - 1]) {
            firstHalf.push_back(nums[i]);
        } else {
            res.push_back(firstHalf);
            res.push_back({nums.begin() + i, nums.end()});
            return res;
        }
    }
    
    res.push_back(firstHalf);
    res.push_back({{nums[n - 1]}});
    return res;
}

int main() {
    vector<int> nums = {1};
    vector<vector<int>> res = cutVector(nums);
    for (auto &v : res) {
        for (int num : v) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}