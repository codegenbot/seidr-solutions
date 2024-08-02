#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int>& nums) {
    int n = nums.size();
    if (n == 1) return {{nums[0]} , {} };
    
    pair<vector<int>, vector<int>> res;
    for (int i = 0; i < n; i++) {
        vector<int> left(nums.begin(), nums.begin() + i);
        vector<int> right(nums.begin() + i, nums.end());
        
        bool equal = true;
        int diff = 0;
        for (int j = 0; j < min(left.size(), right.size()); j++) {
            if (left[j] != right[j]) {
                equal = false;
                break;
            }
            diff += abs(left[j] - right[j]);
        }
        
        if (!equal) continue;
        
        res.first = move(left);
        res.second = move(right);
        return res;
    }
    
    vector<int> left(nums.begin(), nums.end());
    res.first = move(left);
    res.second = {};
    return res;
}

int main() {
    vector<int> nums = {1, 0};
    pair<vector<int>, vector<int>> res = cutVector(nums);
    for (auto num : res.first) cout << num << " ";
    cout << "\n";
    for (auto num : res.second) cout << num << " ";
    cout << endl;
    
    return 0;
}