int basement(std::vector<int> nums) {
    int runningSum = 0;
    int i = -1; // Initialize i as -1
    while (true) {
        i++;
        if (i >= nums.size())
            return -1;
        runningSum += nums[i];
        if (runningSum < 0)
            return i + 1;
    }
};