sort(nums.begin(), nums.end(), [](int a, int b) {
        int sumOfDigitsA = 0, sumOfDigitsB = 0;
        if (a < 0) a = -a;
        if (b < 0) b = -b;
        while (a) {
            sumOfDigitsA += a % 10;
            a /= 10;
        }
        while (b) {
            sumOfDigitsB += b % 10;
            b /= 10;
        }
        if (sumOfDigitsA == sumOfDigitsB) {
            return a > b;
        }
        return sumOfDigitsA < sumOfDigitsB;
    });
    return nums;