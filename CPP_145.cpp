sort(nums.begin(), nums.end(), [](int a, int b) {
    int sumA = 0, sumB = 0;
    if (a < 0) a = -a;
    if (b < 0) b = -b;
    while (a) { sumA += a % 10; a /= 10; }
    while (b) { sumB += b % 10; b /= 10; }
    return (sumA == sumB) ? (a > b) : (sumA < sumB);
});
return nums;