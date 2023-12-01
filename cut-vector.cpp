#include <vector>
#include <iostream>
#include <cmath>
using namespace std;

vector<vector<int>> cut_vector(const vector<int>& nums) {
    int sum = 0;
    for (int num : nums) {
        sum += num;
    }

    int target = sum / 2;
    vector<vector<int>> result(2);

    int curr_sum = 0;
    for (int i = 0; i < nums.size(); i++) {
        curr_sum += nums[i];
        result[0].push_back(nums[i]);
        if (curr_sum == target || (curr_sum > target && abs(curr_sum - target) < abs(curr_sum - nums[i+1] - target))) {
            break;
        }
    }

    for (int i = result[0].size(); i < nums.size(); i++) {
        result[1].push_back(nums[i]);
    }

    return result;
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<vector<int>> result = cut_vector(nums);
    for (const auto& subvector : result) {
        for (int num : subvector) {
            cout << num << endl;
        }
    }

    return 0;
}