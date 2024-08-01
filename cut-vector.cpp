#include <vector>
#include <iostream>

using namespace std;

vector<int> cutVector(vector<int>& nums) {
    int minDiff = INT_MAX;
    int pos = 0;
    for (int i = 1; i < nums.size(); i++) {
        if (abs(nums[i] - nums[0]) < minDiff) {
            minDiff = abs(nums[i] - nums[0]);
            pos = i;
        }
    }
    return {vector<int>({nums.begin(), nums.begin() + pos}), vector<int>({nums.begin() + pos, nums.end()})};
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (auto& num : nums) {
        cin >> num;
    }
    auto res = cutVector(nums);
    cout << res[0].size() << endl;
    for (auto x : res[0]) {
        cout << x << " ";
    }
    cout << endl;
    cout << res[1].size() << endl;
    for (auto x : res[1]) {
        cout << x << " ";
    }
    return 0;
}