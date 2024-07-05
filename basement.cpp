```cpp
int basement(vector<int>& nums) {
    int total = 0;
    int basementIndex = -1; 
    for (int i = 0; i < nums.size(); i++) {
        total += nums[i];
        if (total > 0 && basementIndex == -1) { 
            basementIndex = i;
        } else if (total <= 0) { 
            return basementIndex + 1; 
        }
    }
    return -1; 
}