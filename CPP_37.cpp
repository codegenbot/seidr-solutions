std::vector<float> sort_even(std::vector<float> nums) {
    std::vector<float> even_nums;
    for (const auto& num : nums) {
        if (static_cast<int>(num) % 2 == 0) {
            even_nums.push_back(num);
        }
    }
    std::sort(even_nums.begin(), even_nums.end());
    return even_nums;
}