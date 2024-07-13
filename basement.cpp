```cpp
int basement(vector<int> nums) {
    int sum = 0;
    int i = -1;
    for (int j = 0; j < nums.size(); j++) {
        sum += nums[j];
        if (sum < 0) return j;
    }
    return -1;
}