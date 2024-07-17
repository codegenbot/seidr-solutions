#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> nums) {
    int n = nums.size();
    pair<vector<int>, vector<int>> res;
    
    for (int i = 1; i < n; i++) {
        if (abs(nums[i] - nums[0]) <= abs((nums[i] + nums[0]) / 2)) {
            res.first = vector<int>(nums.begin(), nums.begin() + i);
            res.second = vector<int>(nums.begin() + i, nums.end());
            return res;
        }
    }
    
    res.first = vector<int>(nums.begin(), nums.end());
    res.second.clear();
    return res;
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