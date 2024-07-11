else {
    vector<int> left(min_idx+1), right(n-min_idx-1);
    for(int i=0; i<=min_idx; i++) left.push_back(nums[i]);
    for(int i=min_idx+1; i<n; i++) right.push_back(nums[i]);
    return {left,right};
}