sort(nums.begin(), nums.end(), [](int a, int b) {
    int sumA = 0, sumB = 0;
    if (a < 0) a = -a;
    if (b < 0) b = -b;
    while (a) { sumA += a % 10; a /= 10; }
    while (b) { sumB += b % 10; b /= 10; }
    if (sumA == sumB) return false;
    return sumA < sumB;
});
return nums;