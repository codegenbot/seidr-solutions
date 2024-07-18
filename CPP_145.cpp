sort(nums.begin(), nums.end(), [](int a, int b) {
        int sum_a = 0, sum_b = 0;
        int num_a = abs(a), num_b = abs(b);
        while (num_a > 0) {
            sum_a += num_a % 10;
            num_a /= 10;
        }
        while (num_b > 0) {
            sum_b += num_b % 10;
            num_b /= 10;
        }
        if (sum_a == sum_b) {
            return a < b;
        }
        return sum_a < sum_b;
    });
    return nums;