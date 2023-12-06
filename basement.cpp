
```
int basement(vector<int>& nums) {
    int prev = 0;
    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] <= prev) {
            return i;
        }
        prev = nums[i];
    }
    return -1;
}
```