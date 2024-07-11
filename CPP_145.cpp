std::vector<int> order_by_points(std::vector<int>& nums) {
    std::vector<std::pair<int, int>> pairs;
    for (int i = 0; i < nums.size(); ++i) {
        int sum = 0;
        int num = abs(nums[i]);
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        pairs.emplace_back(i, sum);
    }
    std::sort(pairs.begin(), pairs.end());
    std::vector<int> result;
    for (const auto& pair : pairs) {
        result.push_back(nums[pair.first]);
    }
    return result;
}