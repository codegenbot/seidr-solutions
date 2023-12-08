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
```