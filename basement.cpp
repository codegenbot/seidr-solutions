#include <vector>
#include <iostream>
using namespace std;
int getFirstNegativeIndex(vector<int>& nums) {
    int sum = 0;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        if (sum < 0) {
            return i;
        }
    }
    return -1;
}
```
In this modified solution, we keep track of the running sum of elements up to the current index. If the running sum is negative at any point, we return the corresponding index. Otherwise, we return -1 if no such index exists..