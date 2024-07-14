````
#include <vector>
#include <iostream> 
using namespace std;

vector<vector<int>> cutVector(vector<int>& nums) {
    int n = nums.size();
    vector<vector<int>> res;
    for (int i = 0; i < n; i++) {
        if (i == n - 1 || abs(nums[i] - nums[i + 1]) > nums[i]) {
            res.push_back(vector<int>(nums.begin(), nums.begin() + i + 1));
            break;
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

    for (const auto& v : result) {
        for (int num : v) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
```