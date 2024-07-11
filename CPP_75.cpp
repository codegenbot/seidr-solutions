if (a < 30) return false;
    for (int i = 2; i <= a / 3; ++i) {
        if (a % i == 0) {
            for (int j = i + 1; j <= a / 2; ++j) {
                if (a % j == 0 && a % (a / i / j) == 0) {
                    return true;
                }
            }
        }
    }
    return false;
}