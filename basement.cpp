```
#include <vector>
#include <iostream>
using namespace std;
int basement(vector<int>& nums) {
    int sum = 0;
    for (auto it : nums) {
        sum += it;
    }
    if (sum < 0) {
        return -1;
    }
    for (int i = 0; i < nums.size(); i++) {
        sum -= nums[i];
        if (sum < 0) {
            return i;
        }
    }
    return -1;
}
```