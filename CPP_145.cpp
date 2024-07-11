bool issame(vector<int> a, vector<int> b) {
    sort(a.begin(), a.end(), [](int x, int y) {
        int sum_x = 0, sum_y = 0;
        if (x < 0) x *= -1;
        if (y < 0) y *= -1;
        while (x > 0) {
            sum_x += x % 10;
            x /= 10;
        }
        while (y > 0) {
            sum_y += y % 10;
            y /= 10;
        }
        if (sum_x == sum_y) {
            return x < y;
        }
        return sum_x < sum_y;
    });
    sort(b.begin(), b.end(), [](int x, int y) {
        int sum_x = 0, sum_y = 0;
        if (x < 0) x *= -1;
        if (y < 0) y *= -1;
        while (x > 0) {
            sum_x += x % 10;
            x /= 10;
        }
        while (y > 0) {
            sum_y += y % 10;
            y /= 10;
        }
        if (sum_x == sum_y) {
            return x < y;
        }
        return sum_x < sum_y;
    });
    return a == b;
}