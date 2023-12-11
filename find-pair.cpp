```
#include <vector>
#include <iostream>
using namespace std;

vector<int> findPair(const vector<int>& nums, int target) {
    for (int i = 0; i < nums.size(); i++) {
        for (int j = i + 1; j < nums.size(); j++) {
            if (nums[i] + nums[j] == target) {
                return vector<int>{nums[i], nums[j]};
            }
        }
    }
    return vector<int>();
}
```