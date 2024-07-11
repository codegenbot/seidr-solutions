if (x == 1) return true;
    for (int i = 2; i <= sqrt(x); i++) {
        int p = i;
        while (p <= x) {
            if (p == x) return true;
            p *= i;
        }
    }
    return false;
}