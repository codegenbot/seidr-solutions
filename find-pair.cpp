```
#include <vector>
#include <iostream>
using namespace std;

void findPair(vector<int>& nums, int target) {
    for (int i = 0; i < nums.size(); ++i) {
        for (int j = i + 1; j < nums.size(); ++j) {
            if (nums[i] + nums[j] == target) {
                cout << nums[i] << " " << nums[j] << endl;
                return;
            }
        }
    }
}

int main() {
    vector<int> nums = {5, 7};
    int target = 12;
    findPair(nums, target);

    nums = {2500, 6352};
    target = 8852;
    findPair(nums, target);

    nums = {-14, 5};
    target = -9;
    findPair(nums, target);

    nums = {40, -19};
    target = 21;
    findPair(nums, target);

    nums = {-4, 4};
    target = 0;
    findPair(nums, target);
}
```
