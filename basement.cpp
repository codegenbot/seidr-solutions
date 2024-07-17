```cpp
int basement(vector<int>& nums) {
    int minIndex = 0;
    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] < 0 && nums[i-1] >= 0)
            return i;
        else if (nums[i] < 0)
            minIndex = i;
    }
    return -1;
}