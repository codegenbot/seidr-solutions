```cpp
int basement(std::vector<int>& nums) {
    int minIndex = -1;
    int total = 0;
    for (int i = 0; i < nums.size(); i++) {
        total += nums[i];
        if (total < 0)
            minIndex = i + 1;
    }
    return minIndex;
}