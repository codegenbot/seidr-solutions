if (n == 1 && x == 1)
        return true;
    if (n == 1 || x == 1)
        return false;
    for (int i = 2; i <= sqrt(x); i++) {
        int p = i;
        while (p <= x) {
            p *= i;
            if (p == x && i == n)
                return true;
        }
    }
    return false;
}