```cpp
int basement(vector<int> &nums) {
    for (int i = 0; i < nums.size(); i++) {
        int sum = 0;
        for (int j = 0; j <= i; j++) {
            sum += nums[j];
            if (sum < 0) return j + 1;
        }
    }
    return -1;
}