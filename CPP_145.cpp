std::vector<int> order_by_points(std::vector<int> nums) {
    std::sort(nums.begin(), nums.end(), [](int a, int b) {
        int sumDigitsA = 0, sumDigitsB = 0;
        if (a < 0) a *= -1;
        if (b < 0) b *= -1;

        while (a > 0) {
            sumDigitsA += a % 10;
            a /= 10;
        }

        while (b > 0) {
            sumDigitsB += b % 10;
            b /= 10;
        }

        if (sumDigitsA == sumDigitsB) {
            return find(nums.begin(), nums.end(), a) < find(nums.begin(), nums.end(), b);
        }
        
        return sumDigitsA < sumDigitsB;
    });
    
    return nums;
}