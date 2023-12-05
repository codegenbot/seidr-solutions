```
int basement(vector<int>& nums) {
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] > 0) {
            return -1;
        }
    }
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