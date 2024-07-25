if (a < 30) return false;
    for (int i = 2; i <= a / 3; ++i) {
        if (a % i == 0) {
            int remaining = a / i;
            for (int j = i + 1; j <= remaining / 2; ++j) {
                if (remaining % j == 0 && remaining / j != 1) {
                    return true;
                }
            }
        }
    }
    return false;
}