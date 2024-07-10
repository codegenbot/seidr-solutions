#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> &nums) {
    int n = nums.size();
    vector<vector<int>> res;
    
    for (int i = 0; i < n - 1; i++) {
        if (abs(nums[i] - nums[i + 1]) <= abs(nums[0] - nums[n - 1])) {
            res.push_back({nums.begin(), nums.begin() + i + 1});
            res.push_back({nums.begin() + i + 1, nums.end()});
            return res;
        }
    }
    
    res.push_back({nums.begin(), nums.end()});
    res.push_back({});
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
    
    for (const auto &vec : result) {
        for (int num : vec) {
            cout << num << " ";
        }
        cout << endl;
    }
    
    return 0;
}