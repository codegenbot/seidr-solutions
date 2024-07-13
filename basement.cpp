```cpp
int basement(std::vector<int>& nums) {
    int sum = 0;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        if (sum < 0) return i + 1;
        else if (sum == 0 && i > 0) continue;
        else if (i == 0 && sum < 0) return 0;
    }
    return -1;
}