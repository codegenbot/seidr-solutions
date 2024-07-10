```cpp
int basement(vector<int>& nums) {
    int sum = 0;
    int index = -1; 
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        if (sum < 0) {
            return i + 1; 
        }
    }
    return -1; 
}