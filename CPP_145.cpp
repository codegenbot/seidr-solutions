sort(nums.begin(), nums.end(), [](int a, int b) {
    int sumA = abs(a), sumB = abs(b);
    while (sumA > 9) sumA = sumA % 10 + sumA / 10;
    while (sumB > 9) sumB = sumB % 10 + sumB / 10;
    return sumA == sumB ? a < b : sumA < sumB;
});
return nums;