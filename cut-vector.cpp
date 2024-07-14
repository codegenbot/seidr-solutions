#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> nums) {
    int n = nums.size();
    vector<vector<int>> res(2);
    
    for (int i = 1; i < n; ++i) {
        if (nums[i] - nums[0] <= nums[n-1] - nums[i]) {
            res[0] = vector<int>(nums.begin(), nums.end() - i);
            res[1] = vector<int>(nums.begin() + i, nums.end());
            break;
        }
    }
    
    if (res[0].empty()) {
        res[0] = nums;
        res[1].clear();
    } else {
        res[1].push_back(0);
    }
    
    return res;
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    vector<vector<int>> result = cutVector(nums);
    for (const auto& v : result) {
        for (int num : v) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}