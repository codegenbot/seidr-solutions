#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> &nums) {
    int min_diff = INT_MAX;
    int cut_index = 0;

    for (int i = 1; i < nums.size(); i++) {
        int diff = abs(nums[i] - nums[i-1]);
        if (diff <= min_diff) {
            min_diff = diff;
            cut_index = i;
        }
    }

    return {{nums[0], nums[:cut_index]}};
}