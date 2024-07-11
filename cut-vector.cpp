#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int>& nums) {
    int minDiff = INT_MAX;
    pair<vector<int>, vector<int>> result;
    
    for (int i = 1; i < nums.size(); ++i) {
        int diff = abs(nums[i] - nums[0]);
        if (diff <= minDiff) {
            minDiff = diff;
            result.first = vector<int>(nums.begin(), nums.begin() + i);
            result.second = vector<int>(nums.begin() + i, nums.end());
        }
    }
    
    return result;
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n+1);
    for (int i = 0; i <= n; ++i) {
        cin >> nums[i];
    }
    
    pair<vector<int>, vector<int>> res = cutVector(nums);
    
    cout << "[";
    for (auto num : res.first) {
        cout << num << " ";
    }
    cout << "]" << endl;
    cout << "[";
    for (auto num : res.second) {
        cout << num << " ";
    }
    cout << "]" << endl;
    
    return 0;
}