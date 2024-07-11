#include <vector>
#include <iostream>

using namespace std;

vector<vector<int>> cutVector(vector<int> &nums) {
    int n = nums.size();
    vector<vector<int>> result;
    
    for (int i = 1; i < n; ++i) {
        if (abs(nums[i] - nums[i-1]) == 0) continue;
        if ((i > 1 && abs(nums[i] - nums[i-1]) <= abs(nums[i-1] - nums[i-2])) ||
            (i == 1 || abs(nums[i] - nums[i-1]) < abs(nums[i-1] - nums[i-2]))) {
            result.push_back({nums.begin(), nums.begin() + i});
            nums.erase(nums.begin(), nums.begin() + i);
            break;
        }
    }
    
    if (!nums.empty()) {
        result.push_back(nums);
    }

    return result;
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (auto &num : nums) {
        cin >> num;
    }
    vector<vector<int>> res = cutVector(nums);
    for (const auto &subVec : res) {
        for (int num : subVec) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}