if (x == 1) {
        return true;
    }
    for (int i = 2; i <= sqrt(x); i++) {
        int p = i, power = n;
        while (p < x) {
            p *= i;
            power *= n;
        }
        if (p == x && power == x) {
            return true;
        }
    }
    return false;
}