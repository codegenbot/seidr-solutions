#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> nums) {
    int min_diff = INT_MAX;
    int index = 0;
    for (int i = 1; i < nums.size(); i++) {
        int diff = abs(nums[i] - nums[i-1]);
        if (diff <= min_diff) {
            min_diff = diff;
            index = i;
        }
    }
    vector<int> left(nums.begin(), nums.begin() + index);
    vector<int> right(nums.begin() + index, nums.end());
    return {left, right};
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    pair<vector<int>, vector<int>> result = cutVector(nums);
    cout << "Left: ";
    for (int num : result.first) {
        cout << num << " ";
    }
    cout << endl;
    cout << "Right: ";
    for (int num : result.second) {
        cout << num << " ";
    }
    return 0;
}