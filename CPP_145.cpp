bool issame(std::vector<int> a, std::vector<int> b) {
    return (a == b);
}

std::vector<int> order_by_points(const std::vector<int>& nums) {
    std::vector<int> sorted_nums = nums;
    std::sort(sorted_nums.begin(), sorted_nums.end());
    return sorted_nums;
}