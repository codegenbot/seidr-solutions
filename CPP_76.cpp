if (x == 1)
        return true;
    for (int i = 2; i <= sqrt(x); i++) {
        int temp = x;
        while (temp % i == 0) {
            temp /= i;
        }
        if (temp == 1 && i >= 2 && i % n == 0) {
            return true;
        }
    }
    return false;