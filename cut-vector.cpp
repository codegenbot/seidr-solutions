#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int>& nums) {
    int minDiff = INT_MAX;
    int idx = 0;
    
    for (int i = 1; i < nums.size(); i++) {
        int diff = abs(nums[i] - nums[i-1]);
        if (diff <= minDiff) {
            minDiff = diff;
            idx = i;
        }
    }
    
    vector<vector<int>> res(2);
    res[0].insert(res[0].end(), nums.begin(), nums.begin() + idx);
    res[1].insert(res[1].begin(), nums.begin() + idx, nums.end());
    
    return res;
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (auto& num : nums) cin >> num;

    vector<vector<int>> result = cutVector(nums);

    for (const auto& vec : result) {
        for (int i : vec) cout << i << " ";
        cout << endl;
    }
    
    return 0;
}