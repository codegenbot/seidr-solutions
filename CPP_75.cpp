if (a < 6) return false;
    for (int i = 2; i <= sqrt(a); i++) {
        if (a % i == 0) {
            int factor2 = i;
            int factor3 = a / i;
            for (int j = 2; j <= sqrt(factor3); j++) {
                if (factor3 % j == 0) {
                    return true;
                }
            }
        }
    }
    return false;
}