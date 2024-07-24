#include <vector>
#include <climits>
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
            vector<int> temp(nums.begin() + i, nums.end());
            nums = temp;
            int j = 0;
            for (int num : temp) {
                if (num == diff1) {
                    j++;
                } else {
                    break;
                }
            }
            result.push_back(vector<int>(temp.begin(), temp.begin() + j));
        }
    }
    
    return result;
}

int main() {
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> result = cutVector(nums);
    for (const auto& subVec : result) {
        for (int num : subVec) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}