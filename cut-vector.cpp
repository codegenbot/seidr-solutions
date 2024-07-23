#include <vector>
using namespace std;

vector<int> cutVector(vector<int>& nums) {
    int n = nums.size();
    vector<int> res1, res2;
    
    for (int i = 0; i < n - 1; i++) {
        if (abs(nums[i] - nums[i + 1]) <= abs(nums[0] - nums[n - 1])) {
            res1 = vector<int>(nums.begin(), nums.begin() + i + 1);
            res2 = vector<int>(nums.begin() + i, nums.end());
            return {res1, res2};
        }
    }
    
    // if no cut is found
    res1 = vector<int>(nums.begin(), nums.end());
    res2 = {};
    return {res1, res2};
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    pair<vector<int>, vector<int>> result = cutVector(nums);
    cout << "First subvector: ";
    for (int num : result.first) {
        cout << num << " ";
    }
    cout << endl;
    cout << "Second subvector: ";
    for (int num : result.second) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}