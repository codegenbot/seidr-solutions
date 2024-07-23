#include <vector>
using namespace std;

vector<int> leaders(vector<int>& nums) {
    vector<int> result;
    int maxRight = nums.back();
    for (int i = nums.size() - 2; i >= 0; --i) {
        if (nums[i] >= maxRight) {
            maxRight = nums[i];
            result.push_back(nums[i]);
        }
    }
    return result;
}

int main() {
    vector<int> nums = {1, 3, 4, 1, 5};
    vector<int> leadersResult = leaders(nums);
    for (int num : leadersResult) {
        cout << num << " ";
    }
    return 0;
}