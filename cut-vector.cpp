```cpp
```#include <vector>
#include <algorithm>

std::pair<std::vector<int>, std::vector<int>> cutVector(const std::vector<int>& nums) {
    int min_idx = -1;
    for(int i=0; i<nums.size()-1; i++){
        int diff = nums[i+1] - nums[i];
        if(diff == 0 && (min_idx == -1 || i < min_idx)) min_idx = i;
        else if(diff > 0 && (min_idx == -1 || i < min_idx)) min_idx = i;
    }
    if(min_idx == -1) {
        std::vector<int> res(1);
        for(int i=0; i<nums.size(); i++)
            res[0].push_back(nums[i]);
    } else {
        std::vector<int> res(2);
        for(int i=0; i<=min_idx; i++)
            res[0].push_back(nums[i]);
        for(int i=min_idx+1; i<nums.size(); i++)
            res[1].push_back(nums[i]);
    }
    return {res[0], res[1]};
}
```