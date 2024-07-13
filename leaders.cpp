#include <vector>
using namespace std;

int main() {
    vector<int> nums = {5, 2, 3, 4}; 
    vector<int> res = leaders(nums);
    for (int num : res) {
        cout << num << " ";
    }
    return 0;
}

vector<int> leaders(vector<int>& nums) {
    int n = nums.size();
    vector<int> res;
    res.push_back(nums.back());
    for (int i = n - 2; i >= 0; --i) {
        if (nums[i] >= res.back()) {
            res.push_back(nums[i]);
        }
    }
    reverse(res.begin(), res.end());
    return res;
}