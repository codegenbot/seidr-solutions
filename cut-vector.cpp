#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> &nums) {
    int n = nums.size();
    vector<vector<int>> res(2);
    for (int i = 1; i <= n / 2; i++) {
        if (abs(nums[i] - nums[n-i-1]) < abs(nums[i-1] - nums[n-i])) {
            res[0].clear(); res[0].insert(res[0].end(), nums.begin(), nums.begin() + i);
            res[1].clear(); res[1].insert(res[1].end(), nums.end() - i, nums.end());
            return res;
        }
    }
    res[0] = nums; res[1].clear();
    return res;
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (auto &num : nums) {
        cin >> num;
    }
    vector<vector<int>> res = cutVector(nums);
    cout << "[";
    for (const auto &num : res[0]) {
        cout << num << " ";
    }
    cout << "] ["; 
    for (const auto &num : res[1]) {
        cout << num << " ";
    }
    cout << "]" << endl;
    return 0;
}