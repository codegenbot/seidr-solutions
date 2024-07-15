bool isSame(vector<int> nums a, vector<int> nums b) {
    sort(nums.begin(), nums.end(), [](int x, int y) {
        int sumX = abs(x), sumY = abs(y);
        while (sumX >= 10) sumX = sumX / 10 + sumX % 10;
        while (sumY >= 10) sumY = sumY / 10 + sumY % 10;
        return sumX == sumY ? x < y : sumX < sumY;
    });
    return nums;
}