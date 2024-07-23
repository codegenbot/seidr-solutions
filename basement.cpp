```cpp
int basement(const vector<int>& nums) {
    int sum = 0;
    size_t idx = 0;
    while (true) {
        sum += nums[idx];
        if (sum < 0) return idx + 1; 
        if (++idx >= nums.size()) break; 
    }
    throw runtime_error("No basement found");
}