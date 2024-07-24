#include <vector>
#include <iostream>

using namespace std;

vector<int> cutVector(vector<int>& nums) {
    int min_diff = INT_MAX;
    int cut_index = 0;

    for (int i = 1; i < nums.size(); i++) {
        int diff = abs(nums[i] - nums[0]);
        if (diff <= min_diff) {
            min_diff = diff;
            cut_index = i;
        }
    }

    vector<int> left = vector<int>(nums.begin(), nums.begin() + cut_index);
    vector<int> right = vector<int>(nums.begin() + cut_index, nums.end());

    return {left, right};
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (auto& num : nums) {
        cin >> num;
    }

    auto res = cutVector(nums);

    cout << "(";
    for (const auto& num : res[0]) {
        cout << num << " ";
    }
    cout << ")" << endl;

    cout << "(";
    for (int i = 1; i < res[1].size(); i++) {
        cout << res[1][i] << " ";
    }
    cout << "0)" << endl;

    return 0;
}