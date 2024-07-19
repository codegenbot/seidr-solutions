bool issame(vector<int> a, vector<int> b) {
    sort(a.begin(), a.end(), [](int x, int y) {
        int sumDigitsX = 0, sumDigitsY = 0;
        if (x < 0) x *= -1;
        if (y < 0) y *= -1;
        while (x > 0) {
            sumDigitsX += x % 10;
            x /= 10;
        }
        while (y > 0) {
            sumDigitsY += y % 10;
            y /= 10;
        }
        if (sumDigitsX == sumDigitsY) {
            return x < y;
        }
        return sumDigitsX < sumDigitsY;
    });
    sort(b.begin(), b.end(), [](int x, int y) {
        int sumDigitsX = 0, sumDigitsY = 0;
        if (x < 0) x *= -1;
        if (y < 0) y *= -1;
        while (x > 0) {
            sumDigitsX += x % 10;
            x /= 10;
        }
        while (y > 0) {
            sumDigitsY += y % 10;
            y /= 10;
        }
        if (sumDigitsX == sumDigitsY) {
            return x < y;
        }
        return sumDigitsX < sumDigitsY;
    });
    return a == b;
}