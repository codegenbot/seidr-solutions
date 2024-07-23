#include <vector>
using namespace std;

vector<int> leaders(vector<int>& nums) {
    vector<int> result;
    int maxRight = nums.back();
    for (int i = nums.size() - 1; i >= 0; --i) {
        if (nums[i] >= maxRight) {
            maxRight = nums[i];
            result.push_back(nums[i]);
        }
    }
    return result;
}

int main() {
    vector<int> nums = {17, 28, 4, 27, 29, 30, 20};
    vector<int> result = leaders(nums);
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}