if (a < 30) {
        return false;
    }
    for (int i = 2; i <= a / 3; ++i) {
        if (a % i == 0) {
            int b = a / i;
            for (int j = i + 1; j <= b / 2; ++j) {
                if (b % j == 0) {
                    int c = b / j;
                    if (c >= j && b % c == 0) {
                        return true;
                    }
                }
            }
        }
    }
    return false;
}