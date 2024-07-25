sort(nums.begin(), nums.end(), [](int a, int b) {
        int sum1 = 0, sum2 = 0;
        if (a < 0) a = -a;
        if (b < 0) b = -b;
        while (a) { sum1 += a % 10; a /= 10; }
        while (b) { sum2 += b % 10; b /= 10; }
        return sum1 == sum2 ? a < b : sum1 < sum2;
    });
    return nums;
}