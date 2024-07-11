sort(nums.begin(), nums.end(), [](const int& a, const int& b) {
    int sumA = 0, sumB = 0;
    if (a < 0) sumA -= a;
    else sumA += a;
    if (b < 0) sumB -= b;
    else sumB += b;
    if (sumA == sumB) return &a - &b;
    return sumA < sumB;
});
return nums;