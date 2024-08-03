std::vector<int> sort_third(std::vector<int> nums) {
    std::sort(nums.begin() + 2, nums.begin() + 5);
    return nums;
}