```cpp
#include <vector>
using namespace std;

vector<int> leaders(vector<int>& nums) {
    vector<int> res;
    int rightmost = nums.back();
    for (int i = nums.size() - 2; i >= 0; --i) {
        if (nums[i] >= rightmost) {
            res.push_back(nums[i]);
            rightmost = nums[i];
        }
    }
    return res;
}

int main() {
    vector<int> nums = {16, 17, 4, 3, 5, 2};
    vector<int> leadersInNums = leaders(nums);
    for (int leader : leadersInNums) {
        cout << leader << " ";
    }
    return 0;
}