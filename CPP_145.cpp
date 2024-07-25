sort(nums.begin(), nums.end(), [](int a, int b) {
    int sumA = 0, sumB = 0;
    while (a) {
        sumA += abs(a % 10);
        a /= 10;
    }
    while (b) {
        sumB += abs(b % 10);
        b /= 10;
    }
    if (sumA == sumB) {
        return a < b;
    }
    return sumA < sumB;
});
return nums;