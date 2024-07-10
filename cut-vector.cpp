#include <vector>
using namespace std;

vector<int> cutVector(vector<int>& nums) {
    int n = nums.size();
    if (n == 1) return {nums};

    vector<int> res;
    for (int i = 0; i < n - 1; ++i) {
        int diff = abs(nums[i] - nums[i + 1]);
        if (diff <= 0 || (res.empty() || res.back() != nums[i])) {
            res.push_back(nums[i]);
            res.push_back(nums[i + 1]);
            break;
        }
    }
    return {res};