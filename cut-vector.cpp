#include <vector>
using namespace std;

vector<int> cutVector(vector<int>& nums) {
    int n = nums.size();
    vector<int> res1, res2;
    for (int i = 0; i < n; ++i) {
        if (i == n - 1 || nums[i] != nums[i + 1]) {
            res1.push_back(nums[i]);
            break;
        }
    }
    for (int i = n - 1; i >= 0; --i) {
        if (i == 0 || nums[i] != nums[i - 1]) {
            res2.insert(res2.begin(), nums[i]);
            break;
        }
    }
    return {res1, res2};
}