if (a < 30) return false;
    for (int i = 2; i <= a / 3; ++i) {
        if (a % i == 0) {
            int b = a / i;
            for (int j = i + 1; j <= b / 2; ++j) {
                if (b % j == 0 && is_prime(i) && is_prime(j) && is_prime(b / j)) {
                    return true;
                }
            }
        }
    }
    return false;
}