vector<int> order_by_points(vector<int> nums){
    sort(nums.begin(), nums.end(), [](int a, int b) {
        int sum1 = 0, sum2 = 0;

        if (a < 0) a *= -1;
        if (b < 0) b *= -1;

        while (a > 0) {
            sum1 += a % 10;
            a /= 10;
        }

        while (b > 0) {
            sum2 += b % 10;
            b /= 10;
        }

        if (sum1 == sum2) {
            return a < b;
        } else {
            return sum1 < sum2;
        }
    });

    return nums;
}