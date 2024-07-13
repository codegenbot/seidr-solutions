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
    vector<int> res;
    int rightmost = nums.back();
    for (int i = nums.size() - 1; i >= 0; --i) {
        if (nums[i] >= rightmost) {
            res.push_back(nums[i]);
            rightmost = nums[i];
        }
    }
    return res;
}