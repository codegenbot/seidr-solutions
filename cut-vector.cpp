#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int>& nums) {
    int min_diff = INT_MAX;
    int cut_index = 0;
    for (int i = 1; i <= nums.size(); ++i) {
        int left_sum = 0, right_sum = 0;
        for (int j = 0; j < i; ++j) {
            left_sum += nums[j];
        }
        for (int j = i; j < nums.size(); ++j) {
            right_sum += nums[j];
        }
        int diff = abs(left_sum - right_sum);
        if (diff < min_diff) {
            min_diff = diff;
            cut_index = i;
        }
    }
    return {vector<int>(nums.begin(), nums.begin() + cut_index), vector<int>(nums.begin() + cut_index, nums.end())};
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (auto& num : nums) {
        cin >> num;
    }
    pair<vector<int>, vector<int>> result = cutVector(nums);
    cout << "[";
    for (const auto& num : result.first) {
        cout << num << " ";
    }
    cout << "] ["; 
    for (const auto& num : result.second) {
        cout << num << " ";
    }
    cout << "]" << endl;
    return 0;
}