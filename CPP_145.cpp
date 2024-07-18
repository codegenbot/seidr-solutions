std::vector<int> order_by_points(std::vector<int> nums) {
    std::sort(nums.begin(), nums.end(), [](int a, int b) {
        int sum_a = std::abs(a) < 10 ? std::abs(a) : (std::abs(a) % 10 + std::abs(a) / 10);
        int sum_b = std::abs(b) < 10 ? std::abs(b) : (std::abs(b) % 10 + std::abs(b) / 10);
        if (sum_a == sum_b) {
            return std::find(nums.begin(), nums.end(), a) < std::find(nums.begin(), nums.end(), b);
        }
        return sum_a < sum_b;
    });
    return nums;
}