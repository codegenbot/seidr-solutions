sort(nums.begin(), nums.end(), [](int a, int b) {
    int sumA = abs(a) == 0 ? 0 : abs(a) % 9 == 0 ? 9 : abs(a) % 9;
    int sumB = abs(b) == 0 ? 0 : abs(b) % 9 == 0 ? 9 : abs(b) % 9;
    if (sumA == sumB) {
        return find(nums.begin(), nums.end(), a) < find(nums.begin(), nums.end(), b);
    } else {
        return sumA < sumB;
    }
});
return nums;