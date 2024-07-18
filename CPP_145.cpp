bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> order_by_points(std::vector<int> nums) {
    std::sort(nums.begin(), nums.end(), [](int a, int b) {
        int sum_a = 0, sum_b = 0;
        int temp_a = a, temp_b = b;

        while (temp_a != 0) {
            sum_a += std::abs(temp_a % 10);
            temp_a /= 10;
        }

        while (temp_b != 0) {
            sum_b += std::abs(temp_b % 10);
            temp_b /= 10;
        }

        if (sum_a == sum_b) {
            return a < b;
        }
        return sum_a < sum_b;
    });

    return nums;
}