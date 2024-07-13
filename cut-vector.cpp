#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> &nums) {
    int n = nums.size();
    for (int i = 0; i < n - 1; i++) {
        if (abs(nums[i] - nums[i + 1]) <= abs(nums[0] - nums[n - 1])) {
            return {{nums.begin(), nums.begin() + i + 1}, {nums.begin() + i + 1, nums.end()}};
        }
    }
    return {{nums.begin(), nums.end()}, {}};
}