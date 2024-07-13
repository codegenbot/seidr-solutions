#include <vector>
#include <iostream>
using namespace std;

vector<vector<int>> cutVector(vector<int> &nums) {
    int n = nums.size();
    vector<vector<int>> result;
    
    for (int i = 1; i <= n; i++) {
        if (i == n || abs(nums[i] - nums[0]) > abs(nums[i-1] - nums[0])) {
            result.push_back({nums.begin(), nums.begin() + i});
            nums.erase(nums.begin());
            break;
        }
    }
    
    result.push_back({nums.begin(), nums.end()});
    
    return result;
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    vector<vector<int>> res = cutVector(nums);
    for (auto &v : res) {
        for (int x : v) cout << x << " ";
        cout << endl;
    }
    
    return 0;
}