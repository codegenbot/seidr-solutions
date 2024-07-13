#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int>& nums) {
    int n = nums.size();
    vector<vector<int>> res(2);
    for (int i = 1; i < n; i++) {
        if (nums[i] - nums[0] == i * (nums[i] - nums[0]) / i) {
            res[0].assign(nums.begin(), nums.begin() + i);
            res[1].assign(nums.begin() + i, nums.end());
            break;
        }
    }
    return res;
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n+1);
    for (int i = 0; i <= n; i++) {
        cin >> nums[i];
    }
    auto result = cutVector(nums);
    for (int i = 0; i < 2; i++) {
        cout << "[";
        for (int num : result[i]) {
            cout << num;
            if (i == 1) {
                cout << " ";
            } else {
                cout << "] ";
            }
        }
        cout << endl;
    }
    return 0;
}