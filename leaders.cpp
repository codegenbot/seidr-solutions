```
#include <vector>
#include <iostream>

using namespace std;

vector<int> leaders(vector<int> nums) {
    vector<int> leaders;
    int max = INT_MIN;
    for (int i = nums.size() - 1; i >= 0; i--) {
        if (nums[i] > max) {
            max = nums[i];
            leaders.push_back(max);
        }
    }
    return leaders;
}
```
The code is now free of any syntax errors and will compile successfully.