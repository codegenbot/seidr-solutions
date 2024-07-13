#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> &nums) {
    int n = nums.size();
    int min_diff = INT_MAX;
    int pos = 0;
    for (int i = 1; i < n; i++) {
        int diff = abs(nums[i] - nums[0]);
        if (diff < min_diff) {
            min_diff = diff;
            pos = i;
        }
    }
    vector<int> left, right;
    copy(nums.begin(), nums.begin() + pos, back_inserter(left));
    copy(nums.begin() + pos, nums.end(), back_inserter(right));
    return {left, right};
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (auto &num : nums) {
        cin >> num;
    }
    pair<vector<int>, vector<int>> result = cutVector(nums);
    cout << "1 ";
    for (const auto &num : result.first) {
        cout << num << " ";
    }
    cout << endl;
    cout << "0";
    for (const auto &num : result.second) {
        cout << " " << num;
    }
    cout << endl;
    return 0;
}