#ifndef LEADERS_H
#define LEADERS_H

#include <vector>
using namespace std;

vector<int> findLeaders(vector<int> nums);

#endif
```
```cpp
// leaders.cpp

#include "leaders.h"

vector<int> findLeaders(vector<int> nums) {
    vector<int> leaders;
    if(nums.empty()) {
        return leaders;
    }
    
    int maxRight = nums.back();
    leaders.push_back(maxRight);
    
    for(int i = nums.size() - 2; i >= 0; i--) {
        if(nums[i] >= maxRight) {
            maxRight = nums[i];
            leaders.insert(leaders.begin(), maxRight);
        }
    }
    
    return leaders;
}

int main() {
    vector<int> input = {16, 17, 4, 3, 5, 2};
    vector<int> result = findLeaders(input);
    
    for(int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;
    
    return 0;
}
```  