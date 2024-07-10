```cpp
int min_idx = -1;
for(int i=0; i<n-1; i++){
    int diff = nums[i+1] - nums[i];
    if(diff == 0 && (min_idx == -1 || i < min_idx)) min_idx = i;
    else if(diff > 0 && (min_idx == -1 || i < min_idx)) min_idx = i;
}
if(min_idx == -1) {
    res[0].clear();
    for(int i=0; i<n; i++)
        res[0].push_back(nums[i]);
} else {
    res[0].clear();
    for(int i=0; i<=min_idx; i++)
        res[0].push_back(nums[i]);
    res[1].clear();
    for(int i=min_idx+1; i<n; i++)
        res[1].push_back(nums[i]);
}