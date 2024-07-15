```cpp
int basement(const std::vector<int>& nums) {
    int sum = 0;
    for (int i = 0; i < nums.size(); ++i) {
        sum += nums[i];
        if (sum > 0) { 
            sum = 0;
        }
        else if (sum < 0)
            return i;
    }
    return -1;
}