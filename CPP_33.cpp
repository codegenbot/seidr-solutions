std::vector<int> sort_third(std::vector<int> nums) {
    std::sort(nums.begin() + 2, nums.end());
    return nums;
}