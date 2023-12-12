```
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int specialFilter(vector<int> nums) {
    int count = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] > 10 && nums[i] % 2 == 1) {
            count++;
        }
    }
    return count;
}
```