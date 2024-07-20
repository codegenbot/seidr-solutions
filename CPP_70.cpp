bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> strange_sort_list(std::vector<int> nums) {
    std::sort(nums.begin(), nums.end());
    return nums;
}