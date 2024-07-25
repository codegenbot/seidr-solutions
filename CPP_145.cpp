sort(nums.begin(), nums.end(), [](int a, int b) {
    int sumA = abs(a), sumB = abs(b);
    while (sumA > 9) sumA = sumA % 10 + sumA / 10;
    while (sumB > 9) sumB = sumB % 10 + sumB / 10;
    if (sumA == sumB) return &a - &nums[0] < &b - &nums[0];
    return sumA < sumB;
});
return nums;