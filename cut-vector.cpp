#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> &nums) {
    int minDiff = INT_MAX;
    int cutIndex = 0;
    
    for (int i = 1; i <= nums.size(); ++i) {
        if (i == nums.size() || abs((long long)nums[i - 1] - nums[i]) < minDiff) {
            minDiff = abs((long long)nums[i - 1] - nums[i]);
            cutIndex = i;
        }
    }
    
    return {vector<int>(nums.begin(), nums.begin() + cutIndex), vector<int>(nums.begin() + cutIndex, nums.end())};
}

int main() {
    // Your input code here
    return 0;
}