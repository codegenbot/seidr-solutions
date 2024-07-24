#include <vector>
#include <climits>
using namespace std;

vector<vector<int>> cutVector(vector<int>& nums) {
    int n = nums.size();
    vector<vector<int>> result;
    
    int min_diff = INT_MAX;
    for (int i = 1; i < n; i++) {
        int diff1 = 0, diff2 = 0;
        for (int j = 0; j < i; j++) {
            diff1 += nums[j];
        }
        for (int k = i; k < n; k++) {
            diff2 += nums[k];
        }
        if (abs(diff1 - diff2) < abs(min_diff)) {
            min_diff = diff1 - diff2;
            result.push_back(vector<int>(nums.begin(), nums.begin() + i));
            vector<int> temp(nums.begin() + i, nums.end());
            result.push_back(temp);
            break;
        }
    }
    
    return result;
}

int main() {
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> result = cutVector(nums);
    for (const auto &v : result) {
        for (int x : v) {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}