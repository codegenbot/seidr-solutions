if (a < 30) return false;
    for (int i = 2; i <= a / 3; ++i) {
        if (a % i == 0) {
            int b = a / i;
            for (int j = 2; j <= b / 2; ++j) {
                if (b % j == 0) {
                    int c = b / j;
                    if (c != 1 && c != i && c != j) {
                        return true;
                    }
                }
            }
        }
    }
    return false;
}