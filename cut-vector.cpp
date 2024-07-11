int n;
vector<int> res[2];

int min_idx = -1;
int min_diff = INT_MAX;
for(int i=0; i<n-1; i++){
    int diff = abs(nums[i+1] - nums[i]);
    if(diff == 0 && (min_idx == -1 || i < min_idx)) min_idx = i;
    else if(diff <= min_diff) {
        min_diff = diff;
        if(min_idx != -1 && min_diff > 0) break;
        min_idx = i;
    }
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