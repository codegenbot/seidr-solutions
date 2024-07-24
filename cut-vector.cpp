#include <vector>
#include <climits>
#include <cmath>
using namespace std;

vector<vector<int>> cutVector(vector<int>& nums) {
    int n = nums.size();
    vector<vector<int>> result;
    
    int min_diff = INT_MAX;
    for (int i = 1; i < n; i++) {
        int diff1 = nums[i] - nums[0];
        int diff2 = nums[n-1] - nums[i-1];
        if (abs(diff1-diff2) < abs(min_diff)) {
            min_diff = diff1 - diff2;
            result.push_back(vector<int>(nums.begin(), nums.begin() + i));
            for(int j = 0; j < i; j++){
                nums.erase(nums.begin());
            }
        }
    }
    
    if (!nums.empty()) {
        result.push_back(vector<int>(nums.begin(), nums.end()));
    }

    return result;
}

int main() {
    vector<int> nums = {1, 2, 3, 4};
    vector<vector<int>> result = cutVector(nums);
    cout << "The two resulting subvectors are: " << endl;
    for (auto v : result) {
        cout << "[";
        for (int num : v) {
            cout << num << ", ";
        }
        cout << "]" << endl;
    }
    return 0;
}