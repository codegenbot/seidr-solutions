#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> &nums) {
    int n = nums.size();
    int min_diff = INT_MAX;
    vector<vector<int>> res(2);
    
    for (int i = 1; i < n; i++) {
        if (abs(nums[i] - nums[0]) <= min_diff) {
            min_diff = abs(nums[i] - nums[0]);
            res[0].clear();
            res[1].clear();
            res[0].insert(res[0].begin(), nums.begin() + 1, nums.begin() + i);
            res[1].insert(res[1].begin(), nums.begin() + i, nums.end());
        }
    }
    
    return res;
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    vector<vector<int>> result = cutVector(nums);
    cout << "First part: ";
    for (int num : result[0]) {
        cout << num << " ";
    }
    cout << endl;
    cout << "Second part: ";
    for (int num : result[1]) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}