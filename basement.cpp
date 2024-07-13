```cpp
int basement(std::vector<int>& nums) 
{
    int sum = nums[0];
    for (int i = 1; i < nums.size(); i++) {
        sum += nums[i];
        if (sum < 0) return i+1;
    }
    return -1;
}