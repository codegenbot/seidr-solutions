```c++
#include <vector>
#include <climits>
using namespace std;

int main() {
    vector<vector<int>> result = cutVector({1, 2, 3, 4, 5});
    return 0;
}

vector<vector<int>> cutVector(vector<int>& nums) {
    int n = nums.size();
    vector<vector<int>> result;

    int min_diff = INT_MAX;
    for (int i = 1; i < n; i++) {
        int diff1 = accumulate(nums.begin(), nums.begin() + i, 0) - nums[0];
        int diff2 = nums[n-1] - accumulate(nums.end()-n+i, nums.end(), 0);
        if (abs(diff1-diff2) < abs(min_diff)) {
            min_diff = diff1 - diff2;
            result.push_back(vector<int>(nums.begin(), nums.begin() + i));
            nums.erase(nums.begin());
        }
    }

    if (!nums.empty()) {
        result.push_back(nums);
    }

    return result;
}