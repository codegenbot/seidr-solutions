int count_nums(std::vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num > 0 || num < 0) {
            count++;
        }
    }
    return count;
}