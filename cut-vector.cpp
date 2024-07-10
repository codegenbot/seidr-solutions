#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> nums) {
    int min_diff = INT_MAX;
    int cut_index = -1;
    for (int i = 0; i < nums.size() - 1; i++) {
        if (abs(nums[i] - nums[i + 1]) <= min_diff) {
            min_diff = abs(nums[i] - nums[i + 1]);
            cut_index = i;
        }
    }
    vector<int> left = vector<int>(nums.begin(), nums.begin() + cut_index);
    vector<int> right = vector<int>(nums.begin() + cut_index, nums.end());
    return make_pair(left, right);
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    pair<vector<int>, vector<int>> result = cutVector(nums);
    cout << "1 ";
    for (int num : result.first) {
        cout << num << " ";
    }
    cout << endl;
    cout << "0" << endl;
    return 0;
}