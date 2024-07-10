```cpp
int basement(vector<int>& nums) {
    int sum = 0;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        if (sum > 0 && sum + nums[i] <= 0) return i + 1;
    }
    return -1;
}