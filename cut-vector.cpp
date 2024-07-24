#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> nums) {
    int n = nums.size();
    vector<vector<int>> result;
    
    for (int i = 1; i < n; ++i) {
        if (nums[i] - nums[0] <= nums[n-1] - nums[i]) {
            result.push_back({nums.begin(), nums.begin() + i});
            result.push_back({nums.begin() + i, nums.end()});
            return result;
        }
    }
    
    result.push_back({nums.begin(), nums.end()});
    return result;
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    
    vector<vector<int>> res = cutVector(nums);
    cout << "[";
    for (int i = 0; i < res[0].size(); ++i) {
        cout << res[0][i] << " ";
    }
    cout << "] [" << endl;
    cout << "[";
    for (int i = 0; i < res[1].size(); ++i) {
        cout << res[1][i] << " ";
    }
    cout << "0]" << endl;
    
    return 0;
}