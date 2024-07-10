#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int>& nums) {
    int n = nums.size();
    pair<vector<int>, vector<int>> res;
    
    for (int i = 1; i <= n; i++) {
        if (i == n || abs(nums[i-1] - nums[n-i]) > abs(nums[i] - nums[0])) {
            res.first = vector<int>(nums.begin(), nums.begin() + i);
            res.second = vector<int>(nums.begin() + i, nums.end());
            break;
        }
    }
    
    return res;
}

int main() {
    // Your code here
    int n;
    cin >> n;
    vector<int> nums(n+1);
    for (int i = 0; i <= n; i++) {
        cin >> nums[i];
    }
    pair<vector<int>, vector<int>> result = cutVector(nums);
    cout << "[";
    for (int i = 0; i < result.first.size(); i++) {
        cout << result.first[i];
        if (i != result.first.size() - 1) cout << " ";
    }
    cout << "]\n[";
    for (int i = 0; i < result.second.size(); i++) {
        cout << result.second[i];
        if (i != result.second.size() - 1) cout << " ";
    }
    cout << "]\n";
    return 0;
}