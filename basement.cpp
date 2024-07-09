```cpp
int basement(std::vector<int> nums) {
    int runningSum = nums[0];
    for (int i = 1; i < nums.size(); i++) {
        runningSum += nums[i];
        if (runningSum < 0)
            return i + 1;
    }
    return -1;
};