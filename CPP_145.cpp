sort(nums.begin(), nums.end(), [](int a, int b) {
    int sumA = abs(a);
    while (abs(a) > 0) {
        sumA += a % 10;
        a /= 10;
    }
    int sumB = abs(b);
    while (abs(b) > 0) {
        sumB += b % 10;
        b /= 10;
    }
    return sumA == sumB ? &a - &b : sumA < sumB;
});
return nums;
}