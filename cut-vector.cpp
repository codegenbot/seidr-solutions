#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> &nums) {
    int min_diff = INT_MAX;
    int cut_index = -1;
    for (int i = 0; i < nums.size() - 1; i++) {
        int left_sum = 0, right_sum = 0;
        for (int j = 0; j <= i; j++)
            left_sum += nums[j];
        for (int k = i + 1; k < nums.size(); k++)
            right_sum += nums[k];
        int diff = abs(left_sum - right_sum);
        if (diff < min_diff) {
            min_diff = diff;
            cut_index = i;
        }
    }

    vector<int> left = vector<int>(nums.begin(), nums.begin() + cut_index + 1);
    vector<int> right = vector<int>(nums.begin() + cut_index + 1, nums.end());
    return make_pair(left, right);
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
        cin >> nums[i];
    
    pair<vector<int>, vector<int>> result = cutVector(nums);
    for (const auto &num : result.first) 
        cout << num << " ";
    cout << endl;
    
    for (const auto &num : result.second)
        cout << num << " ";
    cout << endl;

    return 0;
}