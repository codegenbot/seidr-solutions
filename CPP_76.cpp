if (x == 1) {
        return true;
    }
    for (int i = 2; i * i <= x; i++) {
        int p = 1;
        while (p < x) {
            p *= i;
        }
        if (p == x) {
            return true;
        }
    }
    return false;
}