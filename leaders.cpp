```
vector<int> leaders(vector<int> nums) {
    vector<int> leaders;
    int currentLeader = INT_MIN;
    for (int i = nums.size() - 1; i >= 0; i--) {
        if (nums[i] > currentLeader) {
            leaders.push_back(nums[i]);
            currentLeader = nums[i];
        }
    }
    return leaders;
}
```