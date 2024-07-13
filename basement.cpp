```cpp
int basement(std::vector<int>& nums) {
    int sum = 0;
    int i = 0;
    while (true) {
        sum += nums[i];
        if (sum < 0) return i + 1; 
        ++i;
    }
}