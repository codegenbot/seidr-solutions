```cpp
int basement(std::vector<int>& nums) {
    int sum = 0;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        if (sum < 0)
            continue;
        while (sum >= 0 && i < nums.size() - 1)
            sum -= nums[++i];
    }
    return sum < 0 ? i + 1 : -1;

}