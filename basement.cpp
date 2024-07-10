```c++
int basement(vector<int>& nums) {
    int sum = 0;
    int minIndex = -1;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        if (sum < 0 && minIndex == -1) {
            minIndex = i + 1;
        }
    }
    return minIndex;
}