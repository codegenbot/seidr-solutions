#include <vector>
using namespace std;

vector<int> leaders(vector<int>& nums) {
    vector<int> result;
    int n = nums.size();
    for (int i = n - 1; i >= 0; --i) {
        if (result.empty() || nums[i] >= result.back()) {
            result.push_back(nums[i]);
        }
    }
    reverse(result.begin(), result.end());
    return result;
}